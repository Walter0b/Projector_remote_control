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
                        "transition: all 0.3s ease-in-out;"
                        "font-size: 13px;"
                        "font-weight: 200;"
                        "background-color:rgb(28, 26, 26);"
                        "text-align: center;"
                        "color: #fff;"
                        "border-bottom: 2px solid royalblue;";
    QString rm_border = "letter-spacing: 10px\n;"
                        "font-family: 'Poppins', sans-serif;"
                        "align-items: center;"
                        "padding: 0px 10px ;"
                        "outline: none;"
                        "border-top-left-radius: 3px;"
                        "border-top-right-radius: 3px;"
                        "transition: all 0.3s ease-in-out;"
                        "font-size: 13px;"
                        "font-weight: 200;"
                        "background-color:rgb(28, 26, 26);"
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
};


#endif // STYLES_H
