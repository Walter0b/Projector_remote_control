#ifndef STYLES_H
#define STYLES_H

#include <QMainWindow>

class Styles
{
public:
    QString border = "letter-spacing: 10px;"
                     "font-family: 'Poppins', sans-serif;"
                     "padding: 0px 10px ;"
                     "outline: none;"
                     "border-top-left-radius: 3px;"
                     "border-top-right-radius: 3px;"
                     "border-bottom-left-radius: 0px;"
                     "border-bottom-right-radius: 0px;"
                     "font-size: 13px;"
                     "font-weight: 200;"
                     "text-align: center;"
                     "color: #fff;"
                     "border-bottom: 2px solid orange;";
    QString rm_border = "letter-spacing: 10px\n;"
                        "font-family: 'Poppins', sans-serif;"
                        "padding: 0px 10px ;"
                        "outline: none;"
                        "border-top-left-radius: 3px;"
                        "border-top-right-radius: 3px;"
                        "border-bottom-left-radius: 0px;"
                        "border-bottom-right-radius: 0px;"
                        "font-size: 13px;"
                        "font-weight: 200;"
                        "text-align: center;"
                        "color: #fff;"
                        "border-bottom: 2px solid gray;";
    QString Orange = "background-color: rgb(255, 120, 0);\n";
    QString Green = "background-color: rgb(46, 194, 126);\n";
    QString Gray = "background-color: gray;\n";
    QString On = "border-image: url(:/On.png);"
                 "max-height: 70px;"
                 "max-width: 70px;"
                 "background-color: green;"
                 "border-radius:35px;"
                 "color :black;"
                 "font-weight:bold;"
                 "border: none;"
                 "background-repeat: none;";

    QString Off = "border-image: url(:/On.png);"
                  "max-height: 70px;"
                  "max-width: 70px;"
                  "background-color: Red;"
                  "border-radius:35px;"
                  "color :black;"
                  "font-weight:bold;"
                  "border: none;"
                  "background-repeat: none;";
};

#endif // STYLES_H
