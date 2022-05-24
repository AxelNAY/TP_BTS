<HTML>
<HEAD>
	<TITLE> Page monsieurmadame php </TITLE>
</HEAD>
<BODY>
<?php
	$sexe = $_POST['sexe'];	
	$nom = $_POST['nom'];	
	if ($sexe == 'mme')
	{
		printf ("Bonjour Madame %s", $nom);
	}
	else
	{
		printf ("Bonjour Monsieur %s", $nom);
	}
?> 
</BODY>
</HTML>
