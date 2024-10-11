import QtQuick   2.15
import QtQuick.Controls
import QtQuick.Layouts
import QtQuick.Dialogs
import Qt5Compat.GraphicalEffects

Item {
    id: root

    height: widget_button_height
    width: widget_button_width

    property var navItems: [
        { "label": "Settings", "iconSource": "../assets/icons/gear-white.svg", "page": "" },
        { "label": "Vehicle", "iconSource": "../assets/icons/LandModeCopter.svg", "page": "" },
        { "label": "Takeoff", "iconSource": "../assets/icons/takeoff.svg", "page": "" },
        { "label": "Gripper", "iconSource": "../assets/icons/Gripper.svg", "page": "" },
        { "label": "....", "iconSource": "../assets/icons/clockwise-arrow.svg", "page": "" }
    ]

    Loader {
        id: pageLoader
    }

    ColumnLayout {
        anchors.fill: parent
        spacing:  widget_button_width / 5
        Repeater {
            model: navItems
            Rectangle {
                Layout.fillWidth: true
                Layout.fillHeight: true
                radius: width / 7
                color: lectron_main_color

                Image {
                    id: image
                    anchors.margins:    parent.height / 6
                    anchors.fill:       parent
                    source: modelData.iconSource
                    fillMode:           Image.PreserveAspectFit
                }

                ColorOverlay {
                    anchors.fill:       image
                    source:             image
                    color:              "white"
                }

                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        pageLoader.source = (pageLoader.source == modelData.page ? "" : modelData.page )
                    }
                    onPressed:
                    {
                        parent.scale = 0.9
                        parent.color = "#b9b9cc"
                    }
                    onReleased:
                    {
                        parent.scale = 1
                        parent.color = lectron_main_color
                    }
                }
            }
        }
    }
}

