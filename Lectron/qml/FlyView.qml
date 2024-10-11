import QtQuick 2.15
import QtQuick.Window
import QtQuick.Controls
import QtQuick.Layouts

Item {
    id: root

    FlyViewToolBar {
        id: fly_view_tool_bar

        anchors {
            top: parent.top
            horizontalCenter: parent.horizontalCenter
            topMargin: height / 4
        }
    }

    FlyViewWidgetLayer {
        id: fly_view_widget_layer
        anchors {
            top: fly_view_tool_bar.bottom
            left: fly_view_tool_bar.left
            topMargin: widget_button_width / 5
        }
    }
}
