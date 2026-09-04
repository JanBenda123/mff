Můj nápad byl takový: vzít N nejmenších vrstev v FPN a použít na to Retinanet

Ale narážím an spoustu problémů - je třeba škálovat obrázky na vstupu do NN ale nezapomenout původní rozměr. (dost možná přes různé collate functions) Nějak by do toho měli jít zakomponovat BBoxes_utils, ale ještě jsem ani nepřemýšlel jak. A dost možná i spoustu dalších věcí - některé části jsem ještě nespustil a nejsou vyladěny.
