import QtQuick  2.15
import QtQuick.Controls
import QtQuick.Dialogs
import QtQuick.Layouts
import QtQuick.Window
import Qt5Compat.GraphicalEffects

Rectangle {
    id: _root
    x: main_center_x
    y: main_center_y

    height: main_window.height * 0.7
    width: main_window.width * 0.7
    radius: height * 0.1

    color: lectron_main_color

    property int joy_size: 150
    property int joy_point_size: 20
    property int botton_diameter : 50

    property bool exclamation_yellow : true
    property bool text_control: true

    property int calibrateCount: 0
    property int maxCalibrateCount: 105
    Rectangle {
        id:back_button
        height: parent.height * 0.1
        width: height
        anchors.left:       parent.left
        anchors.top:        parent.top
        anchors.topMargin:  20
        anchors.leftMargin: 20
        color: lectron_main_color

        Image{
            id:back_button_image
            width: parent.height
            height: parent.height
            source: "../assets/icons/back-black.svg"
            anchors.margins:    parent.height / 6
            fillMode: Image.Stretch
        }
        MouseArea{
            anchors.fill: parent
            onClicked: pageLoader.source = "";
        }
    }

    Text{
        id: calibration_title
        text:       qsTr("Kalibrasyon")
        anchors.top:  parent.top
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.topMargin: 20
        font.pointSize: ukb_font_size
        color: "white"
    }
}
