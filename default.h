#ifndef DEFAULT_H
#define DEFAULT_H

#include <QDialog>

namespace Ui {
class default;
}

class default : public QDialog
{
    Q_OBJECT

public:
    explicit default(QWidget *parent = nullptr);
    ~default();

private:
    Ui::default *ui;
};

#endif // DEFAULT_H
