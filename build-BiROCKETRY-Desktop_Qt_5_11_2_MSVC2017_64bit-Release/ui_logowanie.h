/********************************************************************************
** Form generated from reading UI file 'logowanie.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGOWANIE_H
#define UI_LOGOWANIE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_logowanie
{
public:
    QWidget *centralWidget;
    QLineEdit *login;
    QLineEdit *haslo;
    QLabel *tlo;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QMainWindow *logowanie)
    {
        if (logowanie->objectName().isEmpty())
            logowanie->setObjectName(QStringLiteral("logowanie"));
        logowanie->setWindowModality(Qt::NonModal);
        logowanie->resize(362, 440);
        logowanie->setMinimumSize(QSize(362, 420));
        logowanie->setMaximumSize(QSize(362, 440));
        QIcon icon;
        icon.addFile(QStringLiteral(":/File/Pictures/Logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        logowanie->setWindowIcon(icon);
        logowanie->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        centralWidget = new QWidget(logowanie);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        login = new QLineEdit(centralWidget);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(140, 170, 113, 20));
        haslo = new QLineEdit(centralWidget);
        haslo->setObjectName(QStringLiteral("haslo"));
        haslo->setGeometry(QRect(140, 210, 113, 20));
        haslo->setEchoMode(QLineEdit::Password);
        tlo = new QLabel(centralWidget);
        tlo->setObjectName(QStringLiteral("tlo"));
        tlo->setGeometry(QRect(0, -10, 461, 451));
        tlo->setPixmap(QPixmap(QString::fromUtf8(":/File/Pictures/Logowanie.png")));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 170, 47, 16));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        label->setPalette(palette);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 210, 47, 16));
        label_2->setFont(font);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 250, 75, 23));
        logowanie->setCentralWidget(centralWidget);
        tlo->raise();
        login->raise();
        haslo->raise();
        label->raise();
        label_2->raise();
        pushButton->raise();

        retranslateUi(logowanie);

        QMetaObject::connectSlotsByName(logowanie);
    } // setupUi

    void retranslateUi(QMainWindow *logowanie)
    {
        logowanie->setWindowTitle(QApplication::translate("logowanie", "Logowanie", nullptr));
        login->setText(QApplication::translate("logowanie", "admin", nullptr));
        haslo->setText(QString());
        tlo->setText(QString());
        label->setText(QApplication::translate("logowanie", "Login:", nullptr));
        label_2->setText(QApplication::translate("logowanie", "Has\305\202o:", nullptr));
        pushButton->setText(QApplication::translate("logowanie", "Zaloguj si\304\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logowanie: public Ui_logowanie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGOWANIE_H
