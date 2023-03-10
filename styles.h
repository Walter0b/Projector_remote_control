#ifndef STYLES_H
#define STYLES_H

#include <QMainWindow>

class Styles {
public:
    QString border =    "letter-spacing: 10px;"
                        "font-family: 'Poppins', sans-serif;"
                        "align-items: center;"
                        "padding: 0px 10px ;"
                        "outline: none;"
                        "border-top-left-radius: 3px;"
                        "border-top-right-radius: 3px;"
                        "border-bottom-left-radius: 0px;"
                        "border-bottom-right-radius: 0px;"
                        "transition: all 0.3s ease-in-out;"
                        "font-size: 13px;"
                        "font-weight: 200;"
                        "text-align: center;"
                        "color: #fff;"
                        "border-bottom: 2px solid orange;";
    QString rm_border = "letter-spacing: 10px\n;"
                        "font-family: 'Poppins', sans-serif;"
                        "align-items: center;"
                        "padding: 0px 10px ;"
                        "outline: none;"
                        "border-top-left-radius: 3px;"
                        "border-top-right-radius: 3px;"
                        "border-bottom-left-radius: 0px;"
                        "border-bottom-right-radius: 0px;"
                        "transition: all 0.3s ease-in-out;"
                        "font-size: 13px;"
                        "font-weight: 200;"
                        "text-align: center;"
                        "color: #fff;"
                        "border-bottom: 2px solid gray;";
    QString Orange =    "max-height: 50px;\n"
                        "min-height:61;\n"
                        "min-width:81;\n"
                        "background-color: rgb(255, 120, 0);\n"
                        "border-radius: 8%;\n"
                        "border: none;\n"
                        "background-repeat: none;\n"
                        "opacity: 1;\n";
    QString Green =     "max-height: 50px;\n"
                        "min-height:61;\n"
                        "min-width:81;\n"
                        "background-color: rgb(46, 194, 126);\n"
                        "border-radius: 8%;\n"
                        "border: none;\n";
    QString Gray =      "max-height: 50px;\n"
                        "min-height:61;\n"
                        "min-width:81;\n"
                        "background-color: gray;\n"
                        "border-radius: 8%;\n"
                        "border: none;\n"
                        "opacity: 0.5;\n";
    QString On="border-image: url(:/On.png);"
               "max-height: 70px;"
               "max-width: 70px;"
               "background-color: green;"
               "border-radius:35px;"
               "color :black;"
               "font-weight:bold;"
               "border: none;"
               "background-repeat: none;";

    QString Off="border-image: url(:/On.png);"
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
