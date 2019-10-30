#ifndef COLOR_CHOOSER_H
#define COLOR_CHOOSER_H

#include <QDialog>

namespace Ui {
class color_chooser;
}

class color_chooser : public QDialog
{
    Q_OBJECT

public:
    explicit color_chooser(QWidget *parent = 0);
    ~color_chooser();

private:
    Ui::color_chooser *ui;
};

#endif // COLOR_CHOOSER_H
