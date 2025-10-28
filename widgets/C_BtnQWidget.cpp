#include "widgets/C_BtnQWidget.h"
#include <QPainter>
#include <QMouseEvent>

C_BtnQWidget::C_BtnQWidget(QWidget *parent) : QWidget(parent)
{
    setAutoFillBackground(false);
}

void C_BtnQWidget::enterEvent(QEvent *event)
{
    Q_UNUSED(event);
    m_hover = true;
    update();
}

void C_BtnQWidget::leaveEvent(QEvent *event)
{
    Q_UNUSED(event);
    m_hover = false;
    update();
}

void C_BtnQWidget::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_pressed = true;
        update();
    }
    QWidget::mousePressEvent(event);
}

void C_BtnQWidget::mouseReleaseEvent(QMouseEvent *event)
{
    if (m_pressed && event->button() == Qt::LeftButton) {
        m_pressed = false;
        update();
        emit clicked();
    }
}

void C_BtnQWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QColor bgColor = Qt::transparent;
    
    if (m_pressed)
        bgColor = QColor(0, 0, 0, 30);
    else if (m_hover || m_spotlight)
        bgColor = QColor(0, 0, 0, 20);
    else
        bgColor = Qt::transparent;   

    painter.setRenderHint(QPainter::Antialiasing);
    painter.setBrush(bgColor);
    painter.setPen(Qt::NoPen);
    painter.drawRoundedRect(rect(), 10, 10);

    QWidget::paintEvent(event);
}