# Octomap_Bachelorarbeit
Repository für die Bachelorarbeit von Lukas Noack-Sandring

In diesem Repository befinden sich alle Dateien, welche für die Abschlussarbeit erstellt und auf die im schriftlichen Teil eingegangen wurde.
Zur Übersicht sollen diese hier kurz erklärt werden. 

In dem Ordner wafflepi_3d_mapping befinden sich alle Dateien, welche für die Erstellung der Octomap verwendet wurden. 
Mithilfe der octomap.launch Datei lässt sich die 3D Karte mithilfe des Turtlebots und der Astra Orbbec erstellen.
Ebenso befinden sich in dem Ordner maps die bereits erstellten Karten, welche ebenso von der load_octomap Anwendung verwendet wird. 

In dem Ordner load_octomap befinden sich die nötigen Dateien, um eine erstellte Octomap zu laden und diese zum Navigieren zu nutzen.
Darin enthalten sind ein Python Skript und eine Launch Datei. 
Um eine entsprechende Karte zu laden muss lediglich in der Launch Datei, octomap_load.launch, der Pfad zu der Karte geändert werden:

  <arg name="path" default="/home/lukas/astra_ws/src/wafflepi_3d_mapping/maps/final_map.ot"/>
  
Der Ordner wafflepi_moveit_config enthält die Dateien zur Konfigurierung des Turtlebots, um MoveIt nutzen zu können. 
Hierbei sei gesagt, dass der Übersicht halber alle Config-und Launch Dateien hochgeladen wurden.
Dazu zählen auch diejenigen, auf die in der Arbeit nicht weiter eingegangen wurde und die von MoveIt während des Setups automatisch generiert wurden. 
Wichtig ist hier vor allem die moveit_planning_execution.launch.
Diese startet alle nötigen Launch Dateien, welche von MoveIt benötigt werden, um den Turtlebot anzusteuern. 
Der genaue Inhalt der aufgerufenen Dateien wird im schriftlichen Teil der Arbeit erklärt.

Der Ordner wafflepi_hw_interface enthält 

(Zur Übersicht wurde komplette Moveit config hochgeladen) 
