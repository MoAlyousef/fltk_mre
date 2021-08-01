#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>

void but_cb(Fl_Widget *, void *) {
    auto win = new Fl_Window(200, 100);
    win->end();
    win->show();
    while (win->shown()) {
        Fl::wait();
    }
}

int main() {
    auto win = new Fl_Window(400, 300);
    auto button = new Fl_Button(160, 200, 80, 40, "Click");
    win->end();
    win->show();
    button->callback(but_cb, NULL);
    return Fl::run();
}