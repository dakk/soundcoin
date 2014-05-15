#include "newspage.h"
#include "ui_newspage.h"

NewsPage::NewsPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewsPage)
{
    ui->setupUi(this);

    this->webView = new QWebView (parent);
    this->webView->load(QUrl ("http://soundcoin.me/rtinfo.php"));
    ui->webContainer->addWidget(this->webView);
}

NewsPage::~NewsPage()
{
    delete ui;
}
