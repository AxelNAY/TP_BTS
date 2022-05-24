<html>
<head>
	<title> Ajout dans zone Php </title>
</head>

<body bgcolor="FFCC66">
<?php
	$Num = $_POST['Numero'];
	$Type = $_POST['Type'];
	$HeureOuvert = $_POST['HeureOuvert'];
	$HeureFerme = $_POST['HeureFerme'];
	
	$requete = "INSERT INTO ZONE VALUES ('".$Num."','".$Type."','".$HeureOuvert."','".$HeureFerme."');"  ;
//	echo $requete ;
	$id = mysqli_connect("localhost","root","","bts") ;
	if ($id)
	{
//		echo "ok" ;
		mysqli_query($id,$requete) ;
		mysqli_close($id) ;
	}
	else
	{
		echo "bug" ;
	}
?>


	
	
</body>
</html>
	
	