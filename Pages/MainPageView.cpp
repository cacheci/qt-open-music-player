#include "Pages/MainPageView.h"
#include "widgets/C_BtnQWidget.h"
#include <QApplication>
#include <QWidget>
#include <QWindow>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QSvgWidget>
#include <QProgressBar>

MainPageView::MainPageView(QWidget *parent) : QWidget(parent) {
  // Main-Layout
    auto *mainBoxLayout = new QHBoxLayout;
    mainBoxLayout -> setContentsMargins(0, 0, 0, 0);

    auto *leftW = new QWidget;
    leftW -> setFixedWidth(230);
    leftW -> setContentsMargins(0, 0, 0, 0);
    mainBoxLayout -> addWidget(leftW);

    auto *rightW = new QWidget;
    rightW -> setContentsMargins(0, 0, 0, 0);
    mainBoxLayout -> addWidget(rightW);

    // Left-layout
      auto *leftW_box                 = new QVBoxLayout;
      auto *leftW_box_toplayout       = new QHBoxLayout;
      auto *leftW_box_functionlist    = new QVBoxLayout;
      auto *leftW_box_listmgr         = new QVBoxLayout;
      auto *leftW_box_bottombtns      = new QHBoxLayout;

      leftW_box -> setContentsMargins(12,12,0,12);

      // Left-layout top
        auto *leftW_box_toplayout_logo = new QSvgWidget(":/assets/icons/logo.svg");
        auto *leftW_box_toplayout_title = new QSvgWidget(":/assets/icons/title.svg");  // 左侧栏-顶部-左侧title

        leftW_box_toplayout_logo -> setFixedSize(40,40);
        leftW_box_toplayout_title -> setFixedSize(150,30);
        leftW_box_toplayout_title -> setContentsMargins(0, 3, 0, 0);

      // Left-layout functionlist
        auto *leftW_box_functionlist_fav = new C_BtnQWidget;
        auto *leftW_box_functionlist_recent = new C_BtnQWidget;
        auto *leftW_box_functionlist_library = new C_BtnQWidget;
        auto *leftW_box_functionlist_online = new C_BtnQWidget;

        leftW_box_functionlist -> setContentsMargins(5, 5, 5, 5);
        leftW_box_functionlist -> setSpacing(3);

        // Left-layout functionlist fav
          auto *leftW_box_functionlist_fav_l = new QHBoxLayout;
          auto *leftW_box_functionlist_fav_l_icon = new QSvgWidget(":/assets/icons/leftW_box_functionlist_fav.svg");
          auto *leftW_box_functionlist_fav_l_label = new QLabel(QObject::tr("Favorite"));

          leftW_box_functionlist_fav -> setFixedHeight(30);
          leftW_box_functionlist_fav -> setCursor(Qt::PointingHandCursor);
          leftW_box_functionlist_fav -> setContentsMargins(0, 0, 0, 0);
          leftW_box_functionlist_fav_l -> setContentsMargins(5, 0, 5, 0);
          leftW_box_functionlist_fav_l -> setSpacing(12);
          leftW_box_functionlist_fav_l_icon -> setFixedSize(20,20);

        // Left-layout functionlist recent
          auto *leftW_box_functionlist_recent_l = new QHBoxLayout;
          auto *leftW_box_functionlist_recent_l_icon = new QSvgWidget(":/assets/icons/leftW_box_functionlist_recent.svg");
          auto *leftW_box_functionlist_recent_l_label = new QLabel(QObject::tr("Recent"));

          leftW_box_functionlist_recent -> setFixedHeight(30);
          leftW_box_functionlist_recent -> setCursor(Qt::PointingHandCursor);
          leftW_box_functionlist_recent -> setContentsMargins(0, 0, 0, 0);
          leftW_box_functionlist_recent_l -> setContentsMargins(5, 0, 5, 0);
          leftW_box_functionlist_recent_l -> setSpacing(12);
          leftW_box_functionlist_recent_l_icon -> setFixedSize(20,20);

        // Left-layout functionlist library
          auto *leftW_box_functionlist_library_l = new QHBoxLayout;
          auto *leftW_box_functionlist_library_l_icon = new QSvgWidget(":/assets/icons/leftW_box_functionlist_library.svg");
          auto *leftW_box_functionlist_library_l_label = new QLabel(QObject::tr("Library"));

          leftW_box_functionlist_library -> setFixedHeight(30);
          leftW_box_functionlist_library -> setCursor(Qt::PointingHandCursor);
          leftW_box_functionlist_library -> setContentsMargins(0, 0, 0, 0);
          leftW_box_functionlist_library_l -> setContentsMargins(4, 0, 5, 0);
          leftW_box_functionlist_library_l -> setSpacing(13);
          leftW_box_functionlist_library_l_icon -> setFixedSize(20,20);

        // Left-layout functionlist online
          auto *leftW_box_functionlist_online_l = new QHBoxLayout;
          auto *leftW_box_functionlist_online_l_icon = new QSvgWidget(":/assets/icons/leftW_box_functionlist_online.svg");
          auto *leftW_box_functionlist_online_l_label = new QLabel(QObject::tr("online"));

          leftW_box_functionlist_online -> setFixedHeight(30);
          leftW_box_functionlist_online -> setCursor(Qt::PointingHandCursor);
          leftW_box_functionlist_online -> setContentsMargins(0, 0, 0, 0);
          leftW_box_functionlist_online_l -> setContentsMargins(4, 0, 5, 0);
          leftW_box_functionlist_online_l -> setSpacing(13);
          leftW_box_functionlist_online_l_icon -> setFixedSize(20,20);

      // Left-layout playlistmanager
        auto *leftW_box_listmgr_ctlbtns = new QHBoxLayout;

        // Left-layout playlistmanager controlbuttons
          auto *leftW_box_listmgr_ctlbtns_switchinternal = new QPushButton(QObject::tr("Local"));
          auto *leftW_box_listmgr_ctlbtns_switchexternal = new QPushButton(QObject::tr("External"));
          auto *leftW_box_listmgr_ctlbtns_new = new QPushButton("+");

          leftW_box_listmgr_ctlbtns -> setContentsMargins(0, 0, 0, 0);
          leftW_box_listmgr_ctlbtns -> setSpacing(0);

          // Left-layout playlistmanager controlbuttons internal
            leftW_box_listmgr_ctlbtns_switchinternal -> setFixedSize(55,20);
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

          // Left-layout playlistmanager controlbuttons external
            leftW_box_listmgr_ctlbtns_switchexternal -> setFixedSize(55,20);
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

          // Left-layout playlistmanager controlbuttons new
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

      // Left-layout bottom
        auto *leftW_box_bottombtns_foldleft = new C_BtnQWidget;
        auto *leftW_box_bottombtns_miniplayer = new C_BtnQWidget;
        auto *leftW_box_bottombtns_lang = new C_BtnQWidget;
        auto *leftW_box_bottombtns_settings = new C_BtnQWidget;

        leftW_box_bottombtns -> setContentsMargins(5, 0, 5, 0);

        // Left-layout bottom fold
          auto *leftW_box_bottombtns_foldleft_img = new QSvgWidget(":/assets/icons/leftW_box_bottombtns_foldleft.svg");

          leftW_box_bottombtns_foldleft -> setFixedSize(30,30);
          leftW_box_bottombtns_foldleft_img -> move(5, 5);
          leftW_box_bottombtns_foldleft_img -> setFixedSize(20,20);

        // Left-layout bottom miniplayer
          auto *leftW_box_bottombtns_miniplayer_img = new QSvgWidget(":/assets/icons/leftW_box_bottombtns_miniplayer.svg");

          leftW_box_bottombtns_miniplayer -> setFixedSize(30,30);
          leftW_box_bottombtns_miniplayer_img -> move(5, 5);
          leftW_box_bottombtns_miniplayer_img -> setFixedSize(20,20);

        // Left-layout bottom language
          auto *leftW_box_bottombtns_lang_img = new QSvgWidget(":/assets/icons/leftW_box_bottombtns_lang.svg");

          leftW_box_bottombtns_lang -> setFixedSize(30,30);
          leftW_box_bottombtns_lang_img -> move(5, 5);
          leftW_box_bottombtns_lang_img -> setFixedSize(20,20);

        // Left-layout bottom setting
          auto *leftW_box_bottombtns_settings_img = new QSvgWidget(":/assets/icons/leftW_box_bottombtns_settings.svg");

          leftW_box_bottombtns_settings -> setFixedSize(30,30);
          leftW_box_bottombtns_settings_img -> move(5, 5);
          leftW_box_bottombtns_settings_img -> setFixedSize(20,20);

    // Right-layout
      auto *rightW_box = new QVBoxLayout;
      auto *rightW_box_main = new QWidget;
      auto *rightW_box_playcontrol = new QWidget;

      rightW_box -> setContentsMargins(0, 8, 8, 8);

      // Right-layout mainarea
        rightW_box_main -> setStyleSheet("background-color: #f8f8f8;"
                                         "border-radius: 5px;");

      // Right-layout playctl
        auto *rightW_box_playcontrol_l = new QHBoxLayout(rightW_box_playcontrol);
        auto *rightW_box_playcontrol_l_songinfo = new QWidget;
        auto *rightW_box_playcontrol_l_ctlmain = new QWidget;
        auto *rightW_box_playcontrol_l_rightctlbtns = new QWidget;

        rightW_box_playcontrol -> setStyleSheet("background-color: #f8f8f8;"
                                                "border-radius: 5px;");
        rightW_box_playcontrol -> setFixedHeight(80);
        rightW_box_playcontrol_l -> setContentsMargins(0, 0, 0, 0);

        // Right-layout playctl infopanel
        // Right-layout playctl midbuttons
          auto *rightW_box_playcontrol_l_ctlmain_l = new QVBoxLayout;
          auto *rightW_box_playcontrol_l_ctlmain_l_btns = new QWidget;
          auto *rightW_box_playcontrol_l_ctlmain_l_progl = new QWidget;

          rightW_box_playcontrol_l_ctlmain -> setFixedWidth(250);
          rightW_box_playcontrol_l_ctlmain_l -> setContentsMargins(0,0,0,0);

          // Right-layout playctl midbuttons up
            auto *rightW_box_playcontrol_l_ctlmain_l_btns_l = new QHBoxLayout;
            auto *rightW_box_playcontrol_l_ctlmain_l_btns_l_orderctl = new QPushButton;
            auto *rightW_box_playcontrol_l_ctlmain_l_btns_l_previous = new QPushButton;
            auto *rightW_box_playcontrol_l_ctlmain_l_btns_l_toggleplay = new QPushButton;
            auto *rightW_box_playcontrol_l_ctlmain_l_btns_l_next = new QPushButton;
            auto *rightW_box_playcontrol_l_ctlmain_l_btns_l_volume = new QPushButton;

            rightW_box_playcontrol_l_ctlmain_l_btns -> setFixedHeight(50);

            // Right-layout playctl midbuttons up order
              auto *rightW_box_playcontrol_l_ctlmain_l_btns_l_orderctl_img = new QSvgWidget(":/assets/icons/rightW_box_playcontrol_l_ctlmain_btns_orderctl_shuffle.svg");

              rightW_box_playcontrol_l_ctlmain_l_btns_l_orderctl -> setFixedSize(16,16);
              rightW_box_playcontrol_l_ctlmain_l_btns_l_orderctl -> move(0, 7);
              rightW_box_playcontrol_l_ctlmain_l_btns_l_orderctl_img -> setFixedSize(16,16);

            // Right-layout playctl midbuttons up previous
              auto *rightW_box_playcontrol_l_ctlmain_l_btns_l_previous_img = new QSvgWidget(":/assets/icons/rightW_box_playcontrol_l_ctlmain_btns_previous.svg");

              rightW_box_playcontrol_l_ctlmain_l_btns_l_previous -> setFixedSize(16,16);
              rightW_box_playcontrol_l_ctlmain_l_btns_l_previous -> move(0, 7);
              rightW_box_playcontrol_l_ctlmain_l_btns_l_previous_img -> setFixedSize(16,16);

            // Right-layout playctl midbuttons up toggle
              rightW_box_playcontrol_l_ctlmain_l_btns_l_toggleplay -> setStyleSheet("background-color: #555;border-radius: 10px;");
              rightW_box_playcontrol_l_ctlmain_l_btns_l_toggleplay -> setFixedSize(30,30);

            // Right-layout playctl midbuttons up next
              auto *rightW_box_playcontrol_l_ctlmain_l_btns_l_next_img = new QSvgWidget(":/assets/icons/rightW_box_playcontrol_l_ctlmain_btns_next.svg");

              rightW_box_playcontrol_l_ctlmain_l_btns_l_next -> setFixedSize(16,16);
              rightW_box_playcontrol_l_ctlmain_l_btns_l_next -> move(0, 7);
              rightW_box_playcontrol_l_ctlmain_l_btns_l_next_img -> setFixedSize(16,16);

            // Right-layout playctl midbuttons up volume
              auto *rightW_box_playcontrol_l_ctlmain_l_btns_l_volume_img = new QSvgWidget(":/assets/icons/rightW_box_playcontrol_l_ctlmain_btns_volume.svg");

              rightW_box_playcontrol_l_ctlmain_l_btns_l_volume -> setFixedSize(16,16);
              rightW_box_playcontrol_l_ctlmain_l_btns_l_volume -> move(0, 7);
              rightW_box_playcontrol_l_ctlmain_l_btns_l_volume_img -> setFixedSize(16,16);

          // Right-layout playctl midbuttons progressbar
            auto *rightW_box_playcontrol_l_ctlmain_l_progl_l = new QHBoxLayout;
            auto *rightW_box_playcontrol_l_ctlmain_l_progl_l_timeplayed = new QLabel("--:--");
            auto *rightW_box_playcontrol_l_ctlmain_l_progl_l_progbar = new QProgressBar;
            auto *rightW_box_playcontrol_l_ctlmain_l_progl_l_timesong = new QLabel("--:--");

            rightW_box_playcontrol_l_ctlmain_l_progl -> setFixedHeight(30);
            rightW_box_playcontrol_l_ctlmain_l_progl_l -> setContentsMargins(0, 0, 0, 0);

            // Right-layout playctl midbuttons progressbar playedtime
              rightW_box_playcontrol_l_ctlmain_l_progl_l_timeplayed -> setAlignment(Qt::AlignVCenter);
              rightW_box_playcontrol_l_ctlmain_l_progl_l_timeplayed -> setStyleSheet("color:#555;");
              rightW_box_playcontrol_l_ctlmain_l_progl_l_timeplayed -> setContentsMargins(5,0,0,0);
              rightW_box_playcontrol_l_ctlmain_l_progl_l_timeplayed -> setFixedWidth(40);

            // Right-layout playctl midbuttons progressbar progressbar
              rightW_box_playcontrol_l_ctlmain_l_progl_l_progbar -> setContentsMargins(0,0,0,0);

            // Right-layout playctl midbuttons progressbar songtime
              rightW_box_playcontrol_l_ctlmain_l_progl_l_timesong -> setAlignment(Qt::AlignVCenter);
              rightW_box_playcontrol_l_ctlmain_l_progl_l_timesong -> setStyleSheet("color:#555;");
              rightW_box_playcontrol_l_ctlmain_l_progl_l_timesong -> setContentsMargins(0,0,5,0);
              rightW_box_playcontrol_l_ctlmain_l_progl_l_timesong -> setFixedWidth(40);

        // Right-layout playctl rightbuttons
          auto *rightW_box_playcontrol_l_rightctlbtns_l = new QHBoxLayout;
          auto *rightW_box_playcontrol_l_rightctlbtns_l_quality = new C_BtnQWidget;

          //rightW_box_playcontrol_l_rightctlbtns -> setFixedWidth();
          rightW_box_playcontrol_l_rightctlbtns_l_quality -> setFixedSize(20,20);



// ----⬆️creating organizing⬇️----

    // .Right-layout

      // .Right-layout mainarea

      // .Right-layout playctl

        // .Right-layout playctl midbuttons

          // .Right-layout playctl midbuttons up

            // .Right-layout playctl midbuttons up order
              rightW_box_playcontrol_l_ctlmain_l_btns_l_orderctl_img -> setParent(rightW_box_playcontrol_l_ctlmain_l_btns_l_orderctl);
            // .Right-layout playctl midbuttons up previous
              rightW_box_playcontrol_l_ctlmain_l_btns_l_previous_img -> setParent(rightW_box_playcontrol_l_ctlmain_l_btns_l_previous);
            // .Right-layout playctl midbuttons up next
              rightW_box_playcontrol_l_ctlmain_l_btns_l_next_img -> setParent(rightW_box_playcontrol_l_ctlmain_l_btns_l_next);
            // .Right-layout playctl midbuttons up volume
              rightW_box_playcontrol_l_ctlmain_l_btns_l_volume_img -> setParent(rightW_box_playcontrol_l_ctlmain_l_btns_l_volume);

            rightW_box_playcontrol_l_ctlmain_l_btns -> setLayout(rightW_box_playcontrol_l_ctlmain_l_btns_l);
            rightW_box_playcontrol_l_ctlmain_l_btns_l -> addWidget(rightW_box_playcontrol_l_ctlmain_l_btns_l_orderctl);
            rightW_box_playcontrol_l_ctlmain_l_btns_l -> addWidget(rightW_box_playcontrol_l_ctlmain_l_btns_l_previous);
            rightW_box_playcontrol_l_ctlmain_l_btns_l -> addWidget(rightW_box_playcontrol_l_ctlmain_l_btns_l_toggleplay);
            rightW_box_playcontrol_l_ctlmain_l_btns_l -> addWidget(rightW_box_playcontrol_l_ctlmain_l_btns_l_next);
            rightW_box_playcontrol_l_ctlmain_l_btns_l -> addWidget(rightW_box_playcontrol_l_ctlmain_l_btns_l_volume);

          // .Right-layout playctl midbuttons progressbar

            rightW_box_playcontrol_l_ctlmain_l_progl -> setLayout(rightW_box_playcontrol_l_ctlmain_l_progl_l);
            rightW_box_playcontrol_l_ctlmain_l_progl_l -> addWidget(rightW_box_playcontrol_l_ctlmain_l_progl_l_timeplayed);
            rightW_box_playcontrol_l_ctlmain_l_progl_l -> addWidget(rightW_box_playcontrol_l_ctlmain_l_progl_l_progbar);
            rightW_box_playcontrol_l_ctlmain_l_progl_l -> addWidget(rightW_box_playcontrol_l_ctlmain_l_progl_l_timesong);

          rightW_box_playcontrol_l_ctlmain -> setLayout(rightW_box_playcontrol_l_ctlmain_l);
          rightW_box_playcontrol_l_ctlmain_l -> addWidget(rightW_box_playcontrol_l_ctlmain_l_btns);
          rightW_box_playcontrol_l_ctlmain_l -> addWidget(rightW_box_playcontrol_l_ctlmain_l_progl);

        // .Right-layout playctl rightbuttons
          rightW_box_playcontrol_l_rightctlbtns -> setLayout(rightW_box_playcontrol_l_rightctlbtns_l);
          rightW_box_playcontrol_l_rightctlbtns_l -> addWidget(rightW_box_playcontrol_l_rightctlbtns_l_quality);

        rightW_box_playcontrol -> setLayout(rightW_box_playcontrol_l);
        rightW_box_playcontrol_l -> addWidget(rightW_box_playcontrol_l_songinfo);
        rightW_box_playcontrol_l -> addStretch();
        rightW_box_playcontrol_l -> addWidget(rightW_box_playcontrol_l_ctlmain);
        rightW_box_playcontrol_l -> addStretch();
        rightW_box_playcontrol_l -> addWidget(rightW_box_playcontrol_l_rightctlbtns);

      rightW -> setLayout(rightW_box);
      rightW_box -> addWidget(rightW_box_main);
      rightW_box -> addWidget(rightW_box_playcontrol);

    // .Left-layout

      // .Left-layout top
        leftW_box_toplayout -> addWidget(leftW_box_toplayout_logo);
        leftW_box_toplayout -> addWidget(leftW_box_toplayout_title);
        leftW_box_toplayout -> addStretch();

      // .Left-layout functionlist
        leftW_box_functionlist -> addWidget(leftW_box_functionlist_fav);
        leftW_box_functionlist -> addWidget(leftW_box_functionlist_recent);
        leftW_box_functionlist -> addWidget(leftW_box_functionlist_library);
        leftW_box_functionlist -> addWidget(leftW_box_functionlist_online);

        // .Left-layout functionlist fav
          leftW_box_functionlist_fav_l -> addWidget(leftW_box_functionlist_fav_l_icon);
          leftW_box_functionlist_fav_l -> addWidget(leftW_box_functionlist_fav_l_label);
          leftW_box_functionlist_fav_l -> addStretch();
          leftW_box_functionlist_fav -> setLayout(leftW_box_functionlist_fav_l);

        // .Left-layout functionlist recent
          leftW_box_functionlist_recent_l -> addWidget(leftW_box_functionlist_recent_l_icon);
          leftW_box_functionlist_recent_l -> addWidget(leftW_box_functionlist_recent_l_label);
          leftW_box_functionlist_recent_l -> addStretch();
          leftW_box_functionlist_recent -> setLayout(leftW_box_functionlist_recent_l);

        // .Left-layout functionlist library
          leftW_box_functionlist_library_l -> addWidget(leftW_box_functionlist_library_l_icon);
          leftW_box_functionlist_library_l -> addWidget(leftW_box_functionlist_library_l_label);
          leftW_box_functionlist_library_l -> addStretch();
          leftW_box_functionlist_library -> setLayout(leftW_box_functionlist_library_l);

        // .Left-layout functionlist online
          leftW_box_functionlist_online_l -> addWidget(leftW_box_functionlist_online_l_icon);
          leftW_box_functionlist_online_l -> addWidget(leftW_box_functionlist_online_l_label);
          leftW_box_functionlist_online_l -> addStretch();
          leftW_box_functionlist_online -> setLayout(leftW_box_functionlist_online_l);

      // .Left-layout playlistmanager
        leftW_box_listmgr -> addLayout(leftW_box_listmgr_ctlbtns);

        // .Left-layout playlistmanager controlbuttons
          leftW_box_listmgr_ctlbtns -> addWidget(leftW_box_listmgr_ctlbtns_switchinternal);
          leftW_box_listmgr_ctlbtns -> addWidget(leftW_box_listmgr_ctlbtns_switchexternal);
          leftW_box_listmgr_ctlbtns -> addStretch();
          leftW_box_listmgr_ctlbtns -> addWidget(leftW_box_listmgr_ctlbtns_new);

      // .Left-layout bottom

        leftW_box_bottombtns_foldleft_img -> setParent(leftW_box_bottombtns_foldleft);
        leftW_box_bottombtns -> addWidget(leftW_box_bottombtns_foldleft);
        leftW_box_bottombtns -> addStretch();

        leftW_box_bottombtns_miniplayer_img -> setParent(leftW_box_bottombtns_miniplayer);
        leftW_box_bottombtns -> addWidget(leftW_box_bottombtns_miniplayer);
        leftW_box_bottombtns -> addStretch();

        leftW_box_bottombtns_lang_img -> setParent(leftW_box_bottombtns_settings);
        leftW_box_bottombtns -> addWidget(leftW_box_bottombtns_lang);
        leftW_box_bottombtns -> addStretch();
        
        leftW_box_bottombtns_settings_img -> setParent(leftW_box_bottombtns_lang);
        leftW_box_bottombtns -> addWidget(leftW_box_bottombtns_settings);


      leftW_box -> addLayout(leftW_box_toplayout);
      leftW_box -> addLayout(leftW_box_functionlist);
      leftW_box -> addLayout(leftW_box_listmgr);
      leftW_box -> addStretch();
      leftW_box -> addLayout(leftW_box_bottombtns);
      leftW -> setLayout(leftW_box);

    this -> setWindowIcon(QIcon(":/assets/icons/logo.ico"));
    this -> resize(800, 500);
    this -> setMinimumWidth(600);
    this -> setMinimumHeight(450);
    this -> setLayout(mainBoxLayout);
    this -> setWindowTitle("");

#if defined(Q_OS_MAC)
    this -> setAttribute(Qt::WA_TranslucentBackground);
    this -> winId();
    if (QWindow *mpviewwindow = (this -> windowHandle()))
        mpviewwindow -> setProperty("NSAppearanceVibrantLight", true);
#endif

    setLayout(mainBoxLayout);
}