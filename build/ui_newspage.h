/********************************************************************************
** Form generated from reading UI file 'newspage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSPAGE_H
#define UI_NEWSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewsPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *webContainer;

    void setupUi(QWidget *NewsPage)
    {
        if (NewsPage->objectName().isEmpty())
            NewsPage->setObjectName(QString::fromUtf8("NewsPage"));
        NewsPage->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(NewsPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        webContainer = new QVBoxLayout();
        webContainer->setObjectName(QString::fromUtf8("webContainer"));

        verticalLayout_2->addLayout(webContainer);


        retranslateUi(NewsPage);

        QMetaObject::connectSlotsByName(NewsPage);
    } // setupUi

    void retranslateUi(QWidget *NewsPage)
    {
        NewsPage->setWindowTitle(QApplication::translate("NewsPage", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewsPage: public Ui_NewsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSPAGE_H
