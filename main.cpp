#include <QApplication>
#include <QWidget>
#include <QWindow>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QSvgWidget>
#include <QProgressBar>

#include "widgets/C_BtnQWidget.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // 主界面
    QHBoxLayout *mainBoxLayout = new QHBoxLayout;  // 主界面
    mainBoxLayout -> setContentsMargins(0, 0, 0, 0);

    QWidget *leftW = new QWidget;  // 左侧栏
    leftW -> setFixedWidth(230);
    leftW -> setContentsMargins(0, 0, 0, 0);
    mainBoxLayout -> addWidget(leftW);
    QWidget *rightW = new QWidget;  //右侧栏
    rightW -> setContentsMargins(0, 0, 0, 0);
    mainBoxLayout -> addWidget(rightW);

    // 左边栏
    QVBoxLayout *leftW_box = new QVBoxLayout(leftW);

    // 左侧栏-顶部
    QHBoxLayout *leftW_box_toplayout = new QHBoxLayout;  // 左侧栏-顶部
    leftW_box -> addLayout(leftW_box_toplayout);
    leftW_box -> setContentsMargins(12,12,0,12);

    QSvgWidget *leftW_box_toplayout_logo = new QSvgWidget(":/assets/icons/logo.svg");  // 左侧栏-顶部-左侧logo
    leftW_box_toplayout_logo -> setFixedSize(40,40);
    leftW_box_toplayout -> addWidget(leftW_box_toplayout_logo);
    QSvgWidget *leftW_box_toplayout_title = new QSvgWidget(":/assets/icons/title.svg");  // 左侧栏-顶部-左侧title
    leftW_box_toplayout_title -> setFixedSize(150,30);
    leftW_box_toplayout_title -> setContentsMargins(0, 3, 0, 0);
    leftW_box_toplayout -> addWidget(leftW_box_toplayout_title);
    leftW_box_toplayout -> addStretch();

    // 左侧栏-功能区
    QVBoxLayout *leftW_box_functionlist = new QVBoxLayout;  // 左侧栏-功能区
    leftW_box_functionlist -> setContentsMargins(5, 5, 5, 5);
    leftW_box_functionlist -> setSpacing(3);
    leftW_box -> addLayout(leftW_box_functionlist);

    // 左侧栏-功能区-收藏的音乐
    C_BtnQWidget *leftW_box_functionlist_fav = new C_BtnQWidget;  // 左侧栏-功能区-收藏的音乐-按钮部分
    leftW_box_functionlist_fav -> setFixedHeight(30);
    leftW_box_functionlist_fav -> setCursor(Qt::PointingHandCursor);
    leftW_box_functionlist_fav -> setContentsMargins(0, 0, 0, 0);
    leftW_box_functionlist -> addWidget(leftW_box_functionlist_fav);
    QHBoxLayout *leftW_box_functionlist_fav_l = new QHBoxLayout(leftW_box_functionlist_fav);  // 左侧栏-功能区-收藏的音乐-按钮部分-内部
    leftW_box_functionlist_fav_l -> setContentsMargins(5, 0, 5, 0);
    leftW_box_functionlist_fav_l -> setSpacing(12);
    QSvgWidget *leftW_box_functionlist_fav_l_icon = new QSvgWidget(":/assets/icons/leftW_box_functionlist_fav.svg");  // 左侧栏-功能区-收藏的音乐-按钮部分-内部-图
    leftW_box_functionlist_fav_l_icon -> setFixedSize(20,20);
    leftW_box_functionlist_fav_l -> addWidget(leftW_box_functionlist_fav_l_icon);
    leftW_box_functionlist_fav_l -> addWidget(new QLabel(QObject::tr("Favorite")));  // 左侧栏-功能区-收藏的音乐-按钮部分-文
    leftW_box_functionlist_fav_l -> addStretch();

    // 左侧栏-功能区-最近播放
    C_BtnQWidget *leftW_box_functionlist_recent = new C_BtnQWidget;  // 左侧栏-功能区-最近播放-按钮部分
    leftW_box_functionlist_recent -> setFixedHeight(30);
    leftW_box_functionlist_recent -> setCursor(Qt::PointingHandCursor);
    leftW_box_functionlist_recent -> setContentsMargins(0, 0, 0, 0);
    leftW_box_functionlist -> addWidget(leftW_box_functionlist_recent);
    QHBoxLayout *leftW_box_functionlist_recent_l = new QHBoxLayout(leftW_box_functionlist_recent);  // 左侧栏-功能区-最近播放-按钮部分-内部
    leftW_box_functionlist_recent_l -> setContentsMargins(5, 0, 5, 0);
    leftW_box_functionlist_recent_l -> setSpacing(12);
    QSvgWidget *leftW_box_functionlist_recent_l_icon = new QSvgWidget(":/assets/icons/leftW_box_functionlist_recent.svg");  // 左侧栏-功能区-最近播放-按钮部分-内部-图
    leftW_box_functionlist_recent_l_icon -> setFixedSize(20,20);
    leftW_box_functionlist_recent_l -> addWidget(leftW_box_functionlist_recent_l_icon);
    leftW_box_functionlist_recent_l -> addWidget(new QLabel(QObject::tr("Recent")));  // 左侧栏-功能区-最近播放-按钮部分-文
    leftW_box_functionlist_recent_l -> addStretch();

    // 左侧栏-功能区-音乐库
    C_BtnQWidget *leftW_box_functionlist_library = new C_BtnQWidget;  // 左侧栏-功能区-音乐库-按钮部分
    leftW_box_functionlist_library -> setFixedHeight(30);
    leftW_box_functionlist_library -> setCursor(Qt::PointingHandCursor);
    leftW_box_functionlist_library -> setContentsMargins(0, 0, 0, 0);
    leftW_box_functionlist -> addWidget(leftW_box_functionlist_library);
    QHBoxLayout *leftW_box_functionlist_library_l = new QHBoxLayout(leftW_box_functionlist_library);  // 左侧栏-功能区-音乐库-按钮部分-内部
    leftW_box_functionlist_library_l -> setContentsMargins(4, 0, 5, 0);
    leftW_box_functionlist_library_l -> setSpacing(12);
    QSvgWidget *leftW_box_functionlist_library_l_icon = new QSvgWidget(":/assets/icons/leftW_box_functionlist_library.svg");  // 左侧栏-功能区-收藏的音乐-按钮部分-内部-图
    leftW_box_functionlist_library_l_icon -> setFixedSize(20,20);
    leftW_box_functionlist_library_l -> addWidget(leftW_box_functionlist_library_l_icon);
    leftW_box_functionlist_library_l -> addWidget(new QLabel(QObject::tr("Library")));  // 左侧栏-功能区-音乐库-按钮部分-文
    leftW_box_functionlist_library_l -> addStretch();

    // 左侧栏-功能区-在线
    C_BtnQWidget *leftW_box_functionlist_online = new C_BtnQWidget;  // 左侧栏-功能区-在线-按钮部分
    leftW_box_functionlist_online -> setFixedHeight(30);
    leftW_box_functionlist_online -> setCursor(Qt::PointingHandCursor);
    leftW_box_functionlist_online -> setContentsMargins(0, 0, 0, 0);
    leftW_box_functionlist -> addWidget(leftW_box_functionlist_online);
    QHBoxLayout *leftW_box_functionlist_online_l = new QHBoxLayout(leftW_box_functionlist_online);  // 左侧栏-功能区-在线-按钮部分-内部
    leftW_box_functionlist_online_l -> setContentsMargins(5, 0, 5, 0);
    leftW_box_functionlist_online_l -> setSpacing(12);
    QSvgWidget *leftW_box_functionlist_online_l_icon = new QSvgWidget(":/assets/icons/leftW_box_functionlist_online.svg");  // 左侧栏-功能区-收藏的音乐-按钮部分-内部-图
    leftW_box_functionlist_online_l_icon -> setFixedSize(20,20);
    leftW_box_functionlist_online_l -> addWidget(leftW_box_functionlist_online_l_icon);
    leftW_box_functionlist_online_l -> addWidget(new QLabel(QObject::tr("Online")));  // 左侧栏-功能区-在线-按钮部分-文
    leftW_box_functionlist_online_l -> addStretch();

    // 左侧栏-播放列表管理器
    QVBoxLayout *leftW_box_listmgr = new QVBoxLayout;
    leftW_box_listmgr -> setContentsMargins(0, 0, 0, 0);
    leftW_box -> addLayout(leftW_box_listmgr);

    QHBoxLayout *leftW_box_listmgr_ctlbtns = new QHBoxLayout;  // 左侧栏-播放列表管理器-顶部按钮
    leftW_box_listmgr_ctlbtns -> setContentsMargins(0, 0, 0, 0);
    leftW_box_listmgr_ctlbtns -> setSpacing(0);
    leftW_box_listmgr -> addLayout(leftW_box_listmgr_ctlbtns);

    QPushButton *leftW_box_listmgr_ctlbtns_switchinternal = new QPushButton(QObject::tr("Local"));  // 左侧栏-播放列表管理器-顶部按钮-本地歌单
    leftW_box_listmgr_ctlbtns_switchinternal -> setFixedSize(60,20);
    leftW_box_listmgr_ctlbtns_switchinternal -> setStyleSheet(R"(
        QPushButton {
            background-color: transparent;
            border: none;
            color: #666;
        }
        QPushButton:hover {color: #222;}
        QPushButton:pressed {color: #222;}
        QPushButton:checked {color: #222;}
    )");
    leftW_box_listmgr_ctlbtns -> addWidget(leftW_box_listmgr_ctlbtns_switchinternal);
    QPushButton *leftW_box_listmgr_ctlbtns_switchexternal = new QPushButton(QObject::tr("External"));  // 左侧栏-播放列表管理器-顶部按钮-外部歌单
    leftW_box_listmgr_ctlbtns_switchexternal -> setFixedSize(60,20);
    leftW_box_listmgr_ctlbtns_switchexternal -> setStyleSheet(R"(
        QPushButton {
            background-color: transparent;
            border: none;
            color: #666;
        }
        QPushButton:hover {color: #222;}
        QPushButton:pressed {color: #222;}
        QPushButton:checked {color: #222;}
    )");
    leftW_box_listmgr_ctlbtns -> addWidget(leftW_box_listmgr_ctlbtns_switchexternal);
    leftW_box_listmgr_ctlbtns -> addStretch();
    QPushButton *leftW_box_listmgr_ctlbtns_new = new QPushButton(QObject::tr("+"));  // 左侧栏-播放列表管理器-顶部按钮-添加歌单
    leftW_box_listmgr_ctlbtns_new -> setFixedSize(20,20);
    leftW_box_listmgr_ctlbtns_new -> setStyleSheet(R"(
        QPushButton {
            background-color: transparent;
            border: none;
            color: #666;
        }
        QPushButton:hover {color: #222;}
        QPushButton:pressed {color: #222;}
        QPushButton:checked {color: #222;}
    )");
    leftW_box_listmgr_ctlbtns -> addWidget(leftW_box_listmgr_ctlbtns_new);

    // 左侧栏-底部按钮
    leftW_box -> addStretch();
    QHBoxLayout *leftW_box_bottombtns = new QHBoxLayout;
    leftW_box_bottombtns -> setContentsMargins(5, 0, 5, 0);
    leftW_box -> addLayout(leftW_box_bottombtns);

    // 左侧栏-底部按钮-折叠
    C_BtnQWidget *leftW_box_bottombtns_foldleft = new C_BtnQWidget;
    leftW_box_bottombtns_foldleft -> setFixedSize(30,30);
    leftW_box_bottombtns -> addWidget(leftW_box_bottombtns_foldleft);
    QSvgWidget *leftW_box_bottombtns_foldleft_img = new QSvgWidget(":/assets/icons/leftW_box_bottombtns_foldleft.svg",leftW_box_bottombtns_foldleft);  // 左侧栏-底部按钮-折叠-图
    leftW_box_bottombtns_foldleft_img -> move(5, 5);
    leftW_box_bottombtns_foldleft_img -> setFixedSize(20,20);
    leftW_box_bottombtns -> addStretch();

    // 左侧栏-底部按钮-播放器
    C_BtnQWidget *leftW_box_bottombtns_miniplayer = new C_BtnQWidget;
    leftW_box_bottombtns_miniplayer -> setFixedSize(30,30);
    leftW_box_bottombtns -> addWidget(leftW_box_bottombtns_miniplayer);
    QSvgWidget *leftW_box_bottombtns_miniplayer_img = new QSvgWidget(":/assets/icons/leftW_box_bottombtns_miniplayer.svg",leftW_box_bottombtns_miniplayer);  // 左侧栏-底部按钮-折叠-图
    leftW_box_bottombtns_miniplayer_img -> move(5, 5);
    leftW_box_bottombtns_miniplayer_img -> setFixedSize(20,20);
    leftW_box_bottombtns -> addStretch();

    // 左侧栏-底部按钮-语言
    C_BtnQWidget *leftW_box_bottombtns_lang = new C_BtnQWidget;
    leftW_box_bottombtns_lang -> setFixedSize(30,30);
    leftW_box_bottombtns -> addWidget(leftW_box_bottombtns_lang);
    QSvgWidget *leftW_box_bottombtns_lang_img = new QSvgWidget(":/assets/icons/leftW_box_bottombtns_lang.svg",leftW_box_bottombtns_lang);  // 左侧栏-底部按钮-折叠-图
    leftW_box_bottombtns_lang_img -> move(5, 5);
    leftW_box_bottombtns_lang_img -> setFixedSize(20,20);
    leftW_box_bottombtns -> addStretch();

    // 左侧栏-底部按钮-设置
    C_BtnQWidget *leftW_box_bottombtns_settings = new C_BtnQWidget;
    leftW_box_bottombtns_settings -> setFixedSize(30,30);
    leftW_box_bottombtns -> addWidget(leftW_box_bottombtns_settings);
    QSvgWidget *leftW_box_bottombtns_settings_img = new QSvgWidget(":/assets/icons/leftW_box_bottombtns_settings.svg",leftW_box_bottombtns_settings);  // 左侧栏-底部按钮-折叠-图
    leftW_box_bottombtns_settings_img -> move(5, 5);
    leftW_box_bottombtns_settings_img -> setFixedSize(20,20);

    // 右侧
    QVBoxLayout *rightW_box = new QVBoxLayout(rightW);
    rightW_box -> setContentsMargins(0, 8, 8, 8);

    // 右侧-主功能区
    QWidget *rightW_box_main = new QWidget;
    rightW_box_main -> setStyleSheet("background-color: #fcfcfc;"
                                     "border-radius: 10px;");
    rightW_box -> addWidget(rightW_box_main);

    QVBoxLayout *rightW_box_main_l = new QVBoxLayout(rightW_box_main);

    // 右侧-播放控制
    QWidget *rightW_box_playcontrol = new QWidget;
    rightW_box_playcontrol -> setStyleSheet("background-color: #fcfcfc;"
                                            "border-radius: 10px;");
    rightW_box_playcontrol -> setFixedHeight(80);
    rightW_box -> addWidget(rightW_box_playcontrol);

    QHBoxLayout *rightW_box_playcontrol_l = new QHBoxLayout(rightW_box_playcontrol);
    rightW_box_playcontrol_l -> setContentsMargins(0, 0, 0, 0);

    // 右侧-播放控制-歌曲信息
    QHBoxLayout *rightW_box_playcontrol_l_songinfo = new QHBoxLayout;
    rightW_box_playcontrol_l -> addLayout(rightW_box_playcontrol_l_songinfo);
    rightW_box_playcontrol_l -> addStretch();

    // 右侧-播放控制-播放控制器
    QWidget *rightW_box_playcontrol_l_ctlmain = new QWidget;
    rightW_box_playcontrol_l_ctlmain -> setFixedWidth(250);
    rightW_box_playcontrol_l -> addWidget(rightW_box_playcontrol_l_ctlmain);
    QVBoxLayout *rightW_box_playcontrol_l_ctlmain_l = new QVBoxLayout;
    rightW_box_playcontrol_l_ctlmain_l -> setContentsMargins(0,0,0,0);
    rightW_box_playcontrol_l_ctlmain -> setLayout(rightW_box_playcontrol_l_ctlmain_l);

    // 右侧-播放控制-播放控制器-按钮
    QWidget *rightW_box_playcontrol_l_ctlmain_l_btns = new QWidget;
    rightW_box_playcontrol_l_ctlmain_l_btns -> setFixedHeight(50);
    rightW_box_playcontrol_l_ctlmain_l -> addWidget(rightW_box_playcontrol_l_ctlmain_l_btns);

    QHBoxLayout *rightW_box_playcontrol_l_ctlmain_l_btns_l = new QHBoxLayout;
    rightW_box_playcontrol_l_ctlmain_l_btns -> setLayout(rightW_box_playcontrol_l_ctlmain_l_btns_l);

    // 这些代码是示例，后期将会替换成按设置创建按钮
    QPushButton *rightW_box_playcontrol_l_ctlmain_l_btns_l_orderctl = new QPushButton;  // 右侧-播放控制-播放控制器-按钮-播放顺序
    rightW_box_playcontrol_l_ctlmain_l_btns_l_orderctl -> setFixedSize(16,16);
    rightW_box_playcontrol_l_ctlmain_l_btns_l_orderctl -> move(0, 7);
    QSvgWidget *rightW_box_playcontrol_l_ctlmain_l_btns_l_orderctl_img = new QSvgWidget(":/assets/icons/rightW_box_playcontrol_l_ctlmain_btns_orderctl_shuffle.svg",rightW_box_playcontrol_l_ctlmain_l_btns_l_orderctl);
    rightW_box_playcontrol_l_ctlmain_l_btns_l_orderctl_img -> setFixedSize(16,16);
    rightW_box_playcontrol_l_ctlmain_l_btns_l -> addWidget(rightW_box_playcontrol_l_ctlmain_l_btns_l_orderctl);

    QPushButton *rightW_box_playcontrol_l_ctlmain_l_btns_l_previous = new QPushButton;  // 右侧-播放控制-播放控制器-按钮-上一首
    rightW_box_playcontrol_l_ctlmain_l_btns_l_previous -> setFixedSize(24,24);
    rightW_box_playcontrol_l_ctlmain_l_btns_l_previous -> move(0, 3);
    QSvgWidget *rightW_box_playcontrol_l_ctlmain_l_btns_l_previous_img = new QSvgWidget(":/assets/icons/rightW_box_playcontrol_l_ctlmain_btns_previous.svg",rightW_box_playcontrol_l_ctlmain_l_btns_l_previous);
    rightW_box_playcontrol_l_ctlmain_l_btns_l_previous_img -> setFixedSize(24,24);
    rightW_box_playcontrol_l_ctlmain_l_btns_l -> addWidget(rightW_box_playcontrol_l_ctlmain_l_btns_l_previous);

    QPushButton *rightW_box_playcontrol_l_ctlmain_l_btns_l_toggleplay = new QPushButton;  // 右侧-播放控制-播放控制器-按钮-播放
    rightW_box_playcontrol_l_ctlmain_l_btns_l_toggleplay -> setStyleSheet("background-color: #555;border-radius: 10px;");
    rightW_box_playcontrol_l_ctlmain_l_btns_l_toggleplay -> setFixedSize(30,30);
    rightW_box_playcontrol_l_ctlmain_l_btns_l -> addWidget(rightW_box_playcontrol_l_ctlmain_l_btns_l_toggleplay);

    QPushButton *rightW_box_playcontrol_l_ctlmain_l_btns_l_next = new QPushButton;  // 右侧-播放控制-播放控制器-按钮-下一首
    rightW_box_playcontrol_l_ctlmain_l_btns_l_next -> setFixedSize(24,24);
    rightW_box_playcontrol_l_ctlmain_l_btns_l_next -> move(0, 3);
    QSvgWidget *rightW_box_playcontrol_l_ctlmain_l_btns_l_next_img = new QSvgWidget(":/assets/icons/rightW_box_playcontrol_l_ctlmain_btns_next.svg",rightW_box_playcontrol_l_ctlmain_l_btns_l_next);
    rightW_box_playcontrol_l_ctlmain_l_btns_l_next_img -> setFixedSize(24,24);
    rightW_box_playcontrol_l_ctlmain_l_btns_l -> addWidget(rightW_box_playcontrol_l_ctlmain_l_btns_l_next);

    QPushButton *rightW_box_playcontrol_l_ctlmain_l_btns_l_volume = new QPushButton;  // 右侧-播放控制-播放控制器-按钮-音量
    rightW_box_playcontrol_l_ctlmain_l_btns_l_volume -> setFixedSize(20,20);
    rightW_box_playcontrol_l_ctlmain_l_btns_l_volume -> move(0, 5);
    QSvgWidget *rightW_box_playcontrol_l_ctlmain_l_btns_l_volume_img = new QSvgWidget(":/assets/icons/rightW_box_playcontrol_l_ctlmain_btns_volume.svg",rightW_box_playcontrol_l_ctlmain_l_btns_l_volume);
    rightW_box_playcontrol_l_ctlmain_l_btns_l_volume_img -> setFixedSize(20,20);
    rightW_box_playcontrol_l_ctlmain_l_btns_l -> addWidget(rightW_box_playcontrol_l_ctlmain_l_btns_l_volume);

    // 右侧-播放控制-播放控制器-播放进度
    QWidget *rightW_box_playcontrol_l_ctlmain_l_progl = new QWidget;
    rightW_box_playcontrol_l_ctlmain_l_progl -> setFixedHeight(30);
    rightW_box_playcontrol_l_ctlmain_l -> addWidget(rightW_box_playcontrol_l_ctlmain_l_progl);
    QHBoxLayout *rightW_box_playcontrol_l_ctlmain_l_progl_l = new QHBoxLayout;
    rightW_box_playcontrol_l_ctlmain_l_progl_l -> setContentsMargins(0, 0, 0, 0);
    rightW_box_playcontrol_l_ctlmain_l_progl -> setLayout(rightW_box_playcontrol_l_ctlmain_l_progl_l);

    QLabel *rightW_box_playcontrol_l_ctlmain_l_progl_l_timeplayed = new QLabel("--:--");  // 已播时长
    rightW_box_playcontrol_l_ctlmain_l_progl_l_timeplayed -> setAlignment(Qt::AlignVCenter);
    rightW_box_playcontrol_l_ctlmain_l_progl_l_timeplayed ->setStyleSheet("color:#555;");
    rightW_box_playcontrol_l_ctlmain_l_progl_l_timeplayed -> setContentsMargins(5,0,0,0);
    rightW_box_playcontrol_l_ctlmain_l_progl_l_timeplayed -> setFixedWidth(40);
    rightW_box_playcontrol_l_ctlmain_l_progl_l -> addWidget(rightW_box_playcontrol_l_ctlmain_l_progl_l_timeplayed);

    QProgressBar *rightW_box_playcontrol_l_ctlmain_l_progl_l_progbar = new QProgressBar;  // 进度条
    rightW_box_playcontrol_l_ctlmain_l_progl_l_progbar -> setContentsMargins(0,0,0,0);
    rightW_box_playcontrol_l_ctlmain_l_progl_l -> addWidget(rightW_box_playcontrol_l_ctlmain_l_progl_l_progbar);

    QLabel *rightW_box_playcontrol_l_ctlmain_l_progl_l_timesong = new QLabel("--:--");  // 总时长
    rightW_box_playcontrol_l_ctlmain_l_progl_l_timesong -> setAlignment(Qt::AlignVCenter);
    rightW_box_playcontrol_l_ctlmain_l_progl_l_timesong ->setStyleSheet("color:#555;");
    rightW_box_playcontrol_l_ctlmain_l_progl_l_timesong -> setContentsMargins(0,0,5,0);
    rightW_box_playcontrol_l_ctlmain_l_progl_l_timesong -> setFixedWidth(40);
    rightW_box_playcontrol_l_ctlmain_l_progl_l -> addWidget(rightW_box_playcontrol_l_ctlmain_l_progl_l_timesong);

    rightW_box_playcontrol_l -> addStretch();

    // 右侧-播放控制-播放控制
    QHBoxLayout *rightW_box_playcontrol_l_rightctlbtns = new QHBoxLayout;
    rightW_box_playcontrol_l -> addLayout(rightW_box_playcontrol_l_rightctlbtns);

    // 主窗口
    QWidget w;
    w.resize(800, 500);
    w.setMinimumWidth(600);
    w.setMinimumHeight(450);
    w.setLayout(mainBoxLayout);
    w.setWindowTitle("");

#if defined(Q_OS_MAC)
    w.setAttribute(Qt::WA_TranslucentBackground);

    w.winId();
    QWindow *window = w.windowHandle();
    if (window)
        window-> setProperty("NSAppearanceVibrantLight", true);
#endif

    w.show();
    return app.exec();
}
