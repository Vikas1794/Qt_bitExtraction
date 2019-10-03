#include "gitrepositorytest.h"
#include "ui_gitrepositorytest.h"

gitRepositoryTest::gitRepositoryTest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gitRepositoryTest)
{
    ui->setupUi(this);
}

gitRepositoryTest::~gitRepositoryTest()
{
    delete ui;
}
