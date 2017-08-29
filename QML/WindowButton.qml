import QtQuick 2.0

Image {
    id:button
    MouseArea{
        anchors.fill: parent
        id: mouseArea
        onClicked: callback();
    }
}

