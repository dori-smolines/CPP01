#include <iostream>
#include <fstream>   // pour std::ifstream
#include <string>


int main(int argc, char **argv) 
{
	if (argc < 4)
		return (std::cerr << "Error : too few arguments" << std::endl, 1);
	if (argc > 4)
		return (std::cerr << "Error : too many arguments" << std::endl, 1);

	std::string s1 = argv[2];
	std::string s2 = argv[3];

	//ouverture fichier initial
	std::ifstream file(argv[1]); // ouvrir le fichier en lecture : file = fichier ouvert

    if (!file) {
        std::cerr << "Error : Cannot open file !" << std::endl;
        return 1;
    }

	//lecture du contenu du fichier et stockage dans un seul buffer
 	std::string content((std::istreambuf_iterator<char>(file)),
                         std::istreambuf_iterator<char>());

 	file.close(); // fermeture du fichier


	//creation nouveau fichier
	std::ofstream outfile;
	outfile.open((std::string(argv[1]) + ".replace").c_str(), std::ios::trunc); // Crée ou std::ios::trunc écrase le fichier
	    if (!outfile) 
		{
        std::cerr << "Error : Cannot open outfile !" << std::endl;
        return 1;
    	}

	//recherche de la chaine s1, suppression puis insertion de s2
	size_t position = 0;
	while (s1 != "" && (position = content.find(s1, position)) != content.npos)
	{
		content.erase(position, s1.length());
		content.insert(position, s2);
		position += s2.length();
	}

	// inserer le contenu de content dans le fichier outfile
	outfile << content;
//    std::cout << content << std::endl;
   
	outfile.close();

   return 0;
}




						 