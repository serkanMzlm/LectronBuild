import QtQuick    2.15
import QtQuick.Controls
import QtQuick.Layouts
import QtQuick.Dialogs
import Qt5Compat.GraphicalEffects

import lectron.datetime 1.0
import lectron.communication 1.0

Rectangle {
    id: root

    width: parent.width * 0.98
    height: parent.height * 0.075
    radius: height / 4
    color: lectron_main_color

    property int text_font_size:  width == 0 ? 0.01 : width * 0.014

    Rectangle {
        id: logo
        width: parent.width * 0.10
        height: parent.height * 0.35
        color: lectron_main_color

        Image {
            id: image
            source: "../assets/image/lectron.png"
            anchors.fill:       parent
            fillMode: Image.PreserveAspectFit
        }

        ColorOverlay {
            anchors.fill:       image
            source:             image
            color:              "white"
        }

        anchors{
            verticalCenter: parent.verticalCenter
            left: parent.left
            leftMargin: height / 2

        }
    }

    Text {
        id: arm_disarm_text
        text: SerialUdpCom.joy_data[2] == 1 ? "Arm" : "Disarm"
        font.pointSize: ukb_font_size * 1.4
        anchors {
            verticalCenter: parent.verticalCenter
            right: time_text.left
            rightMargin: height / 2
        }

        color: SerialUdpCom.joy_data[2] == 1 ? "lime" : "gray"
    }

    Text {
        id: time_text
        text: ComputerInfo.clock
        font.pointSize: ukb_font_size * 1.5
        anchors.centerIn:  parent
        color: "white"
    }

    Text {
        id: air_land_text
        text: SerialUdpCom.joy_data[0] == 1 ? qsTr("Air") : qsTr("Land")
        font.pointSize: ukb_font_size * 1.4
        anchors {
            verticalCenter: parent.verticalCenter
            left: time_text.right
            leftMargin: height / 2
        }
        color: SerialUdpCom.joy_data[0] == 1 ? "lime" : "gray"
    }

    Text {
        id: vehicle_info_text
        text: qsTr("Locked")
        font.pointSize: ukb_font_size * 1.4
        anchors {
            verticalCenter: parent.verticalCenter
            left: air_land_text.right
            leftMargin: height * 4
        }
        color: "yellow"
    }

    Rectangle {
        id: device_charge_image_rec
        width: parent.width * 0.03
        height: parent.height * 0.6
        color: lectron_main_color

        Image {
            id: device_charge_image
            source: "../assets/icons/Battery.svg"
            anchors.fill:       parent
            fillMode: Image.PreserveAspectFit
        }

        ColorOverlay {
            anchors.fill:       device_charge_image
            source:             device_charge_image
            color:              "white"
        }

        anchors {
            verticalCenter: parent.verticalCenter
            right: device_charge_text.left
        }
    }

    Text {
        id: device_charge_text
        text: ComputerInfo.charge + "%"
        font.pointSize: ukb_font_size * 1.3
        z: 1
        color: "lightgray"
        anchors {
            verticalCenter: parent.verticalCenter
            right: parent.right
            rightMargin: width / 2
        }
    }
}
