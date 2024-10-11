import QtQuick    2.15
import QtQuick.Controls
import QtQuick.Dialogs
import QtQuick.Layouts
import QtQuick.Window

import lectron.communication 1.0

ApplicationWindow {
    id: main_window
    width: 640
    height: 480
    visibility: Window.FullScreen
    visible: true
    title: qsTr("Lectron")

    property color lectron_main_color: "#2e2e2e"
    property int widget_button_height: height * 0.6
    property int widget_button_width: height * 0.15
    property int main_center_x: (main_window.width) / 6
    property int main_center_y: (main_window.height) / 40
    property int ukb_font_size: (height <= 0.01 ? 0.01 : height * 0.015)


    FlyView {
        id: fly_view
        anchors.fill: parent
    }

    Image {
        id: image
        anchors.fill:       parent
        source: "../assets/image/NoVideoBackground.jpg"
        fillMode: Image.Stretch
        z: -1
    }

    Rectangle {
        id: wait_for_video
        height: parent.height * 0.03
        width: parent.width * 0.17
        radius: height / 4
        opacity: 0.9
        color: "black"
        z: -1
        Text {
            text: qsTr("WAITING FOR VIDEO")
            anchors.centerIn: parent
            font.bold: true
            color: "white"
            font.pointSize: ukb_font_size
        }
        anchors.centerIn: parent
    }


}
