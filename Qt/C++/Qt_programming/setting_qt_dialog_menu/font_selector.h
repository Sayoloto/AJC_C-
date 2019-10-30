#ifndef FONT_SELECTOR_H
#define FONT_SELECTOR_H

#include <QDialog>

namespace Ui {
class Font_Selector;
}

class Font_Selector : public QDialog
{
    Q_OBJECT

public:
    explicit Font_Selector(QWidget *parent = 0);
    ~Font_Selector();

private slots:
    void Save();
    void DisplayText();
    void update_fonts();

private:
    Ui::Font_Selector *ui;
signals:
    void ChangeFont( QFont );
};

#endif // FONT_SELECTOR_H
