-- phpMyAdmin SQL Dump
-- version 4.1.14
-- http://www.phpmyadmin.net
--
-- Client :  127.0.0.1
-- Généré le :  Mar 24 Mai 2022 à 22:49
-- Version du serveur :  5.6.17
-- Version de PHP :  5.5.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Base de données :  `nay`
--

-- --------------------------------------------------------

--
-- Structure de la table `badge`
--

CREATE TABLE IF NOT EXISTS `badge` (
  `identifiant` bigint(20) NOT NULL DEFAULT '0',
  `code` smallint(6) DEFAULT NULL,
  `nom` char(50) DEFAULT NULL,
  `prenom` char(50) DEFAULT NULL,
  `zoneacces` smallint(6) DEFAULT NULL,
  `datecreation` date DEFAULT NULL,
  PRIMARY KEY (`identifiant`),
  KEY `relation_vile` (`zoneacces`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Contenu de la table `badge`
--

INSERT INTO `badge` (`identifiant`, `code`, `nom`, `prenom`, `zoneacces`, `datecreation`) VALUES
(1110011100, 1001, 'PACE', 'Adrien', 2, '2008-10-18'),
(1111122222, 1122, 'GARDIEN', 'Gerard', 0, '2008-10-01'),
(1111155555, 1341, 'NAY', 'Axel', 4, '2021-06-17'),
(1112211122, 1221, 'BROUDIC', 'Jimmy', 1, '2008-10-07'),
(1113311133, 1331, 'CADORET', 'Cedric', 2, '2008-10-09'),
(1114411144, 1441, 'JULIEN', 'Benoit', 2, '2008-10-09'),
(1115511155, 1551, 'MAROC', 'Franck', 3, '2008-10-10'),
(1116611166, 1661, 'RODRIGUES', 'Laura', 4, '2008-10-11'),
(1117711177, 1771, 'CAZOT', 'Cedric', 3, '2008-10-15'),
(1118811188, 1881, 'COLIN', 'Kevin', 4, '2008-10-15'),
(1119911199, 1991, 'LAVE', 'Brice', 4, '2008-10-16'),
(1122334455, 1234, 'DUPONT', 'Paul', 2, '2008-10-03'),
(1166778899, 5678, 'MARTIN', 'Pierre', 3, '2008-10-03'),
(1212121212, 1212, 'VISITEUR', 'XX', 1, '2008-10-07'),
(1234512345, 2008, 'DURANT', 'Jacques', 1, '2008-10-03');

-- --------------------------------------------------------

--
-- Structure de la table `horaire`
--

CREATE TABLE IF NOT EXISTS `horaire` (
  `numero` smallint(5) unsigned NOT NULL AUTO_INCREMENT,
  `personne` bigint(20) DEFAULT NULL,
  `jour` date DEFAULT NULL,
  `heure` time DEFAULT NULL,
  PRIMARY KEY (`numero`),
  KEY `relation_ville` (`personne`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=15 ;

--
-- Contenu de la table `horaire`
--

INSERT INTO `horaire` (`numero`, `personne`, `jour`, `heure`) VALUES
(1, 1234512345, '2008-10-20', '09:10:10'),
(2, 1122334455, '2008-10-20', '10:01:00'),
(3, 1166778899, '2008-10-21', '09:35:00'),
(4, 1166778899, '2008-10-21', '18:00:00'),
(5, 1122334455, '2008-10-20', '18:30:00'),
(6, 1166778899, '2008-10-21', '13:35:00'),
(7, 1212121212, '2008-10-26', '15:00:00'),
(8, 1234512345, '2008-10-20', '10:30:00'),
(9, 1166778899, '2008-10-21', '12:30:00'),
(10, 1234512345, '2008-10-20', '14:45:00'),
(11, 1122334455, '2008-10-20', '12:05:00'),
(12, 1115511155, '2008-10-22', '10:00:00'),
(13, 1122334455, '2008-10-20', '13:32:00'),
(14, 1212121212, '2008-10-28', '19:00:00');

-- --------------------------------------------------------

--
-- Structure de la table `zone`
--

CREATE TABLE IF NOT EXISTS `zone` (
  `numzone` smallint(6) NOT NULL DEFAULT '0',
  `typelecteur` char(1) DEFAULT NULL,
  `heureouverture` time DEFAULT NULL,
  `heurefermeture` time DEFAULT NULL,
  PRIMARY KEY (`numzone`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Contenu de la table `zone`
--

INSERT INTO `zone` (`numzone`, `typelecteur`, `heureouverture`, `heurefermeture`) VALUES
(0, 'C', '06:15:00', '20:00:00'),
(1, 'P', '06:00:00', '19:30:00'),
(2, 'P', '10:00:00', '18:45:00'),
(3, 'B', '09:30:00', '18:15:00'),
(4, 'M', '09:00:00', '17:45:00');

--
-- Contraintes pour les tables exportées
--

--
-- Contraintes pour la table `badge`
--
ALTER TABLE `badge`
  ADD CONSTRAINT `relation_vile` FOREIGN KEY (`zoneacces`) REFERENCES `zone` (`numzone`);

--
-- Contraintes pour la table `horaire`
--
ALTER TABLE `horaire`
  ADD CONSTRAINT `relation_ville` FOREIGN KEY (`personne`) REFERENCES `badge` (`identifiant`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
