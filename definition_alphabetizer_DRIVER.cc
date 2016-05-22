#include <iostream>
#include <fstream>
#include <vector>
#include <gtk+/gtk.h>
#include "definition_alphabetizer.h"

using namespace std;

int main()
{ 
	  GtkWidget *window;
	  gtk_init(&argc, &argv);
	  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	  gtk_window_set_title(GTK_WINDOW(window), "Center");
	  gtk_window_set_default_size(GTK_WINDOW(window), 230, 150);
	  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
	  gtk_widget_show(window);
	  g_signal_connect(G_OBJECT(window), "destroy",
	  G_CALLBACK(gtk_main_quit), NULL);
	  gtk_main();

	definition_alphabetizer *Defer = new definition_alphabetizer();
	Defer->definitionize();
	Defer->sortDefs();
	Defer->writeToFile();
	return 0;
}

