#ifndef GITREPOSITORYTEST_H
#define GITREPOSITORYTEST_H

#include <QWidget>

namespace Ui {
class gitRepositoryTest;
}

class gitRepositoryTest : public QWidget
{
    Q_OBJECT

public:
    explicit gitRepositoryTest(QWidget *parent = nullptr);
    ~gitRepositoryTest();

private:
    Ui::gitRepositoryTest *ui;
};

#endif // GITREPOSITORYTEST_H
