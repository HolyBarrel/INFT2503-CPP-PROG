#include <gtkmm.h>

class Window : public Gtk::Window {
public:
  Gtk::Box box;
  Gtk::Label label_fn;
  Gtk::Entry entry_first_name;
  Gtk::Label label_ln;
  Gtk::Entry entry_last_name;
  Gtk::Button button;
  Gtk::Label label;

  Window() : box(Gtk::Orientation::ORIENTATION_VERTICAL) {
    button.set_label("Get full name");

    box.pack_start(label_fn);
    box.pack_start(entry_first_name); // Add the widget entry to box
    box.pack_start(label_ln);
    box.pack_start(entry_last_name); // Add the widget entry to box
    box.pack_start(button);          // Add the widget button to box
    box.pack_start(label);           // Add the widget label to box

    set_title("Delivery four task two");
    set_default_size(700, 400);

    add(box);   // Add vbox to window
    show_all(); // Show all widgets

    button.set_sensitive(false);

    label_fn.set_text("First name:");

    label_ln.set_text("Last name:");

    entry_first_name.signal_changed().connect([this]() {
      react_to_input();
    });

    entry_last_name.signal_changed().connect([this]() {
      react_to_input();
    });

    button.signal_clicked().connect([this]() {
      label.set_text("Name: " + entry_first_name.get_text() + " " + entry_last_name.get_text());
    });
  }

private:
  void react_to_input() {
    if (entry_first_name.get_text() != "" && entry_last_name.get_text() != "") {
      button.set_sensitive(true);
      label.set_text("Press button to see full name =)");
    } else if (entry_first_name.get_text() != "") {
      button.set_sensitive(false);
      label.set_text("Please enter a last name!");
    } else {
      button.set_sensitive(false);
      label.set_text("Please enter a first name!");
    }
  }
};

int main() {
  auto app = Gtk::Application::create();
  Window window;
  return app->run(window);
}
