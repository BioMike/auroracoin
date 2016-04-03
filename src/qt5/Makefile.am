AM_CPPFLAGS += -I$(top_builddir)/src/qt \
               $(QT_INCLUDES)

bin_PROGRAMS = auroracoin-qt
auroracoin_qt_SOURCES = moc_mainwindow.cpp main.cpp mainwindow.cpp

MOC = /usr/lib64/qt5/bin/moc

moc_%.cpp: %.h
	$(MOC) $(DEFINES) $(INCPATH) $< -o $@