#pragma once
#include <QWidget>
#include <QEvent>

class C_BtnQWidget : public QWidget
{
    Q_OBJECT
public:
    explicit C_BtnQWidget(QWidget *parent = nullptr);

protected:
    void enterEvent(QEvent *event) override;
    void leaveEvent(QEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private:
    bool m_hover = false;
    bool m_pressed = false;
    bool m_spotlight = false;

signals:
    void clicked();
};
