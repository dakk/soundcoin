#ifndef NEWSDIALOG_H
#define NEWSDIALOG_H

#include <QWidget>
#include <QWebView>

namespace Ui {
class NewsPage;
}

class NewsPage : public QWidget
{
    Q_OBJECT

public:
    explicit NewsPage(QWidget *parent = 0);
    ~NewsPage();

private:
    Ui::NewsPage *ui;
    QWebView *webView;
};

#endif // NEWSDIALOG_H
