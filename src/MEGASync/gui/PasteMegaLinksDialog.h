#ifndef PASTEMEGALINKSDIALOG_H
#define PASTEMEGALINKSDIALOG_H

#include <QDialog>

#define FILE_LINK_SIZE 70
#define FOLDER_LINK_SIZE 50

namespace Ui {
class PasteMegaLinksDialog;
}

class PasteMegaLinksDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PasteMegaLinksDialog(QWidget *parent = 0);
    ~PasteMegaLinksDialog();
    QStringList getLinks();

private slots:
    void on_bSubmit_clicked();

protected:
    void changeEvent(QEvent * event);

private:
    Ui::PasteMegaLinksDialog *ui;
    QStringList links;

    QStringList extractLinks(QString text);
    QString checkLink(QString link);
};

#endif // PASTEMEGALINKSDIALOG_H
