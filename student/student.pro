QT       += core gui
QT       += gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_grad_student.cpp \
    add_student.cpp \
    add_teacher.cpp \
    admin_window.cpp \
    base_information.cpp \
    delete_grad_student.cpp \
    delete_student.cpp \
    delete_teacher.cpp \
    grad_student.cpp \
    grad_student_interface.cpp \
    main.cpp \
    mainwindow.cpp \
    modify_grad_student.cpp \
    modify_student.cpp \
    modify_teacher.cpp \
    student.cpp \
    student_interface.cpp \
    teacher.cpp \
    teacher_interface.cpp

HEADERS += \
    add_grad_student.h \
    add_student.h \
    add_teacher.h \
    admin_window.h \
    base_information.h \
    delete_grad_student.h \
    delete_student.h \
    delete_teacher.h \
    grad_student.h \
    grad_student_interface.h \
    mainwindow.h \
    modify_grad_student.h \
    modify_student.h \
    modify_teacher.h \
    student.h \
    student_interface.h \
    teacher.h \
    teacher_interface.h

FORMS += \
    add_grad_student.ui \
    add_student.ui \
    add_teacher.ui \
    admin_window.ui \
    delete_grad_student.ui \
    delete_student.ui \
    delete_teacher.ui \
    grad_student_interface.ui \
    mainwindow.ui \
    modify_grad_student.ui \
    modify_student.ui \
    modify_teacher.ui \
    student_interface.ui \
    teacher_interface.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
