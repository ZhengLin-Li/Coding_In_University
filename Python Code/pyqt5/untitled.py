# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'untitled.ui'
#
# Created by: PyQt5 UI code generator 5.15.1
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_Form(object):
    def setupUi(self, Form):
        Form.setObjectName("Form")
        Form.resize(926, 709)
        Form.setStyleSheet("")
        self.label = QtWidgets.QLabel(Form)
        self.label.setGeometry(QtCore.QRect(140, 130, 661, 331))
        self.label.setStyleSheet(
            "image: url(:/456/98e3f6url(:/456/98e3f66egy1g9nzqafme1j20u016fx62.jpg)6egy1g95stt3iqkj20m80m83zj.jpg);")
        self.label.setText("")
        self.label.setPixmap(QtGui.QPixmap("2020-11-26 213847.png"))
        self.label.setObjectName("label")
        self.label_2 = QtWidgets.QLabel(Form)
        self.label_2.setGeometry(QtCore.QRect(210, 60, 531, 61))
        font = QtGui.QFont()
        font.setFamily("Adobe Devanagari")
        font.setPointSize(28)
        self.label_2.setFont(font)
        self.label_2.setAutoFillBackground(False)
        self.label_2.setFrameShadow(QtWidgets.QFrame.Sunken)
        self.label_2.setLineWidth(1)
        self.label_2.setTextFormat(QtCore.Qt.AutoText)
        self.label_2.setObjectName("label_2")
        self.widget = QtWidgets.QWidget(Form)
        self.widget.setGeometry(QtCore.QRect(140, 500, 641, 161))
        self.widget.setObjectName("widget")
        self.gridLayout = QtWidgets.QGridLayout(self.widget)
        self.gridLayout.setContentsMargins(0, 0, 0, 0)
        self.gridLayout.setObjectName("gridLayout")
        self.label_6 = QtWidgets.QLabel(self.widget)
        self.label_6.setObjectName("label_6")
        self.gridLayout.addWidget(self.label_6, 0, 0, 1, 1)
        self.progressBar_2 = QtWidgets.QProgressBar(self.widget)
        self.progressBar_2.setProperty("value", 16)
        self.progressBar_2.setObjectName("progressBar_2")
        self.gridLayout.addWidget(self.progressBar_2, 0, 3, 1, 1)
        self.progressBar_3 = QtWidgets.QProgressBar(self.widget)
        self.progressBar_3.setProperty("value", 37)
        self.progressBar_3.setObjectName("progressBar_3")
        self.gridLayout.addWidget(self.progressBar_3, 2, 1, 1, 1)
        self.progressBar_4 = QtWidgets.QProgressBar(self.widget)
        self.progressBar_4.setProperty("value", 19)
        self.progressBar_4.setObjectName("progressBar_4")
        self.gridLayout.addWidget(self.progressBar_4, 2, 3, 1, 1)
        self.progressBar_6 = QtWidgets.QProgressBar(self.widget)
        self.progressBar_6.setProperty("value", 23)
        self.progressBar_6.setObjectName("progressBar_6")
        self.gridLayout.addWidget(self.progressBar_6, 1, 1, 1, 1)
        self.label_9 = QtWidgets.QLabel(self.widget)
        self.label_9.setObjectName("label_9")
        self.gridLayout.addWidget(self.label_9, 2, 2, 1, 1)
        self.label_10 = QtWidgets.QLabel(self.widget)
        self.label_10.setObjectName("label_10")
        self.gridLayout.addWidget(self.label_10, 1, 0, 1, 1)
        self.progressBar = QtWidgets.QProgressBar(self.widget)
        self.progressBar.setProperty("value", 66)
        self.progressBar.setObjectName("progressBar")
        self.gridLayout.addWidget(self.progressBar, 0, 1, 1, 1)
        self.label_7 = QtWidgets.QLabel(self.widget)
        self.label_7.setObjectName("label_7")
        self.gridLayout.addWidget(self.label_7, 0, 2, 1, 1)
        self.label_11 = QtWidgets.QLabel(self.widget)
        self.label_11.setObjectName("label_11")
        self.gridLayout.addWidget(self.label_11, 1, 2, 1, 1)
        self.label_8 = QtWidgets.QLabel(self.widget)
        self.label_8.setObjectName("label_8")
        self.gridLayout.addWidget(self.label_8, 2, 0, 1, 1)
        self.progressBar_5 = QtWidgets.QProgressBar(self.widget)
        self.progressBar_5.setProperty("value", 22)
        self.progressBar_5.setObjectName("progressBar_5")
        self.gridLayout.addWidget(self.progressBar_5, 1, 3, 1, 1)
        self.widget.setWindowOpacity(0.9)  # 设置窗口透明度
        self.widget.setAttribute(QtCore.Qt.WA_TranslucentBackground)  # 设置窗口背景透明

        self.retranslateUi(Form)
        QtCore.QMetaObject.connectSlotsByName(Form)

    def retranslateUi(self, Form):
        _translate = QtCore.QCoreApplication.translate
        Form.setWindowTitle(_translate("Form", "基于表情识别的情绪分析系统"))
        self.label_2.setText(_translate("Form", "基于表情识别的情绪分析系统"))
        self.label_6.setText(_translate("Form", "快乐"))
        self.label_9.setText(_translate("Form", "厌恶"))
        self.label_10.setText(_translate("Form", "恐惧"))
        self.label_7.setText(_translate("Form", "悲伤"))
        self.label_11.setText(_translate("Form", "惊讶"))
        self.label_8.setText(_translate("Form", "愤怒"))
