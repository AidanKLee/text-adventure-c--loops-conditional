// Lord of the Rings: The Fellowship Of The Ring (Part 1) - Text Adventure

#include <iostream>

int main() {

  std::string select = "Select an path (1 or 2):\n\n";

  std::string partOne = "One day a wizard named Gandalf visited the Shire to celebrate his old friend Bilbo Baggins birthday. Bilbo does a mysterious disappearing act and returns to his house to escape the party after announcing he is deciding to leave the Shire to go to Rivendell to live out the last of his years.\n\n";

  std::string partOne1 = "1) Gandalf rushes back to Bilbos house and asks Bilbo about the old ring he found back in the goblin cave.\n";
  std::string partOne2 = "2) Gandalf carries on with the party, gets drunk and falls asleep in an old cart.\n\n";

  std::string partTwo = "Bilbo shows Gandalf the ring and Gandalf says he should give it to Frodo. \"But it's my precious\" Bilbo says with an animalistic voice. Gandalf gets angry and convinces Bilbo to leave the ring in an envelope for Frodo. Bilbo then leaves for Rivendell. Gandalf tells Frodo he must now go on an adventure to destroy the ring and the evil it contains...\n\n";

  std::string partTwo1 = "1) With some hesitation Frodo accepts and heads out on a journey with Samwise Gamgee to destroy the ring.\n";
  std::string partTwo2 = "2) Frodo can't see why it has to be him to destroy the ring and declines as he likes his life in the Shire.\n\n";

  std::string partThree = "The next morning as Bilbo is leaving, Gandalf wakes up with a terrible hangover, he see's Bilbo is leaving...\n\n";

  std::string partThree1 = "1) and rushes over to him to ask about the ring he used for his disappearing trick.\n";
  std::string partThree2 = "2) but is too tired to do anything so falls back to sleep in the cart.\n\n";

  std::string partFour = "Along the way Frodo bumps into Merry and Pippin who decide to join him, as well as a ranger named Strider. They all journey to Rivendell for the meeting to decide the fate of the ring. They face many trials along the way as well as fighting off the Nazgul. The meeting begins and it is decided the ring must be destroyed...\n\n";

  std::string partFour1 = "1) After much deliberation Frodo announces he will take on the burden as the ring bearer.\n";
  std::string partFour2 = "2) The king of mens son Borimir announces he will be the one to take the ring to be destroyed.\n\n";

  std::string partFive = "Gandalf goes to leave the Shire with an aim to find Bilbo or to meet him at Rivendell, Frodo see's Gandalf leaving...\n\n";

  std::string partFive1 = "1) \"Gandalf\" he shouts, Gandalf turns and sees the little hobbit running over to him. A sudden urge to go on an adventure had come over Frodo. \"I'm coming with you\" he says, Frodo goes to pack his bag and leaves with Gandalf.\n";
  std::string partFive2 = "2) He smiles at Gandalf, Gandalf smiles back and then leaves the shire.\n\n";

  std::string partSix = "On their journey Gandalf and Frodo bump into Samwise Gamgee, Merry, Pippin and a ranger named strider. They decide to join Frodo and Gandalf on their journey.";

  std::string partSixHasRing = " They face many trials along the way as well as fighting off the Nazgul. The meeting begins and it is decided the ring must be destroyed...\n\n";

  std::string partSixNoRing = " On their journey to Rivendell they see a hobbit lying on the floor. They notice it's Bilbo, he is barely alive, with his last few words he says \"They took my precious, they took the ring.\" They sees the nazgul on their horses riding away. Gandalf in fear says \"this could be the end of the world as we know it.\"\n\n";

  std::string partSevenHasRing = "Gandalf arrives at Rivendell and the meeting starts. It is decided that the ring must be destroyed and the bearer of the ring will be the king of mens son Borimir.\n\n";

  std::string partSevenNoRing = "On his journey to Rivendell he see's a hobbit lying on the floor. Bilbo is barely alive, with his last few words he says \"They took my precious Gandalf, they took the ring.\" Gandalf sees the nazgul on their horses riding away. He knew it could be the end of the world as he knew it.\n\n";


  int path;
  bool end = false;
  bool hasRing = false;

  std::string current = partOne;
  std::string option1 = partOne1;
  std::string option2 = partOne2;

  while (!end) {
    std::cout << current;
    std::cout << option1;
    std::cout << option2;

    while (path != 1 && path != 2) {
      std::cout << select;
      std::cin >> path;
    }

    if (path == 1) {
      if (current == partOne) {
          hasRing = true;
          current = partTwo; option1 = partTwo1; option2 = partTwo2;
      } else if (current == partTwo) {
          current = partFour; option1 = partFour1; option2 = partFour2;
      } else if (current == partThree) {
          hasRing = true;
          current = partTwo; option1 = partTwo1; option2 = partTwo2;
      } else if (current == partFour) {
          end = true;
      } else if (current == partFive) {
        if (hasRing) {
          current = partSix + partSixHasRing;
          option1 = partFour1; option2 = partFour2;
        } else {
          std::cout << partSix + partSixNoRing;
          end = true;
        }
      } else if (current == partSix + partSixHasRing) {
        end = true;
      } else if (current == partSevenHasRing) {
        end = true;
      }
    } else {
      if (current == partOne) {
          hasRing = false;
          current = partThree; option1 = partThree1; option2 = partThree2;
      } else if (current == partTwo) {
          current = partFive; option1 = partFive1; option2 = partFive2;
      } else if (current == partThree) {
          hasRing = false;
          current = partFive; option1 = partFive1; option2 = partFive2;
      } else if (current == partFour) {
          end = true;
      } else if (current == partFive) {
        if (hasRing) {
          std::cout << partSevenHasRing;
          end = true;
        } else {
          std::cout << partSevenNoRing;
          end = true;
        }
      }
    }
    path = 0;
  }

  std::cout << "The end for now. More coming soon...\n";
}