import QtQuick 2.10
import QtQuick.Controls 2.3

Page {
    id: welcomepage
    width: 600
    height: 400

    title: qsTr("Welcome Page")



    Rectangle {
        id: background_mask
        x: 0
        y: -5
        width: 600
        height: 405
        color: "#0f1626"

        Image {
            id: background_image
            x: 0
            y: -6
            width: 600
            height: 411
            clip: false
            opacity: 0.2
            fillMode: Image.PreserveAspectFit
            source: "../../Downloads/wallhaven-299643 (1).png"

        }
    }

    Text {
        id: welcomeText
        x: 41
        y: 57
        width: 531
        height: 41
        color: "#ab987a"
        text: qsTr("Welcome to Monopoly Tracker!")
        font.weight: Font.Bold
        font.family: "Arial"
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: 33
    }

    Text {
        id: explanation_text
        x: 41
        y: 148
        width: 527
        height: 104
        color: "#f5f5f5"
        text: qsTr("Monopoly Tracker is a statistical analysis application which determines the ideal move for a palyer within a game of Monopoly. The applicaiton is written in C++, employing the application framework 'Qt' for a comprehemsive graphical user interface. The application considers board layout, player wealth, and applies 'real-world' principles such as appreciation and time-value of money. ")
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        wrapMode: Text.WordWrap
        font.pixelSize: 14
    }

    Rectangle {
        id: button1_mask
        x: 64
        y: 299
        width: 121
        height: 52
        color: "#ff533d"

        Button {
            id: button
            x: 0
            y: 0
            width: 120
            height: 53
            text: qsTr("Exit")
            spacing: 4
            autoRepeat: true
            opacity: 0
        }

        Text {
            id: button1_text
            x: 0
            y: 0
            width: 121
            height: 53
            color: "#f5f5f5"
            text: qsTr("Exit")
            font.family: "Arial"
            font.capitalization: Font.AllUppercase
            renderType: Text.NativeRendering
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            opacity: 0.7
            font.pixelSize: 30
        }
    }


    Rectangle {
        id: button2_mask1
        x: 418
        y: 299
        width: 121
        height: 52
        color: "#ff533d"

        Button {
            id: button2
            x: 1
            y: 0
            width: 120
            height: 53
            text: qsTr("Enter")
            autoExclusive: true
            autoRepeat: true
            opacity: 0
            spacing: 4
        }

        Text {
            id: button2_text1
            x: 0
            y: 0
            width: 121
            height: 53
            color: "#f5f5f5"
            text: qsTr("Enter")
            font.capitalization: Font.AllUppercase
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 27
            opacity: 0.7
            renderType: Text.NativeRendering
            font.family: "Arial"
            verticalAlignment: Text.AlignVCenter
        }

    }








}
