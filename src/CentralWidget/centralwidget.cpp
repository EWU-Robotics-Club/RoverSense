#include "centralwidget.h"
#include <QPushButton>

CentralWidget::CentralWidget(QWidget *parent) : QWidget{parent}
{
    //Create the layout
    m_hBoxLayout = new QHBoxLayout(this);
    this->setLayout(m_hBoxLayout);

    //Create the frames and add them to the layout
    m_rightFrame = new QFrame(this);
    m_leftFrame = new QFrame(this);
    m_leftFrame->setFixedWidth(280);
    m_rightFrame->setStyleSheet("background-color: rgb(255, 255, 255);");
    m_hBoxLayout->addWidget(m_rightFrame);
    m_hBoxLayout->addWidget(m_leftFrame);

}

CentralWidget::~CentralWidget()
{
    delete m_hBoxLayout;
    delete m_rightFrame;
    delete m_leftFrame;
}
