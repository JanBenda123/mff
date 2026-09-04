# Final k-medoids

V řešení jsem použil CUDA a MPI a na zadaném datasetu program běží 8.8 sekundy.

Celé řešení funguje tak, že každý rank má přiřazené nějaké clustery, které počítá. Jediná snychronizace, která je potřeba, je po každé iteraci sdílet pomocí MPI s ostatními ranky nové lokálně spočítané medoidy. Celý zbytek řešení využívá CUDA.

Pro urychlení výpočtu SQFD si předpočítáme self-similarity (distribuovaně a pak ji přes MPI AllGather posdílíme). Výpočet similarity dvou featur probíhá na jednom bloku a ukládá částečné výsledky do sdílené paměti, kterou poté redukujeme. Assign to clusters je dělán takto hloupým způsobem proto, abychom se vyhnuli nutné synchronizaci mezi ranky - pro 5 ranků kvůli čekání zabírá synchronizace podobnou dobu jako O(n^2) výpočet vzdálenosti v rámci clusterů. ComputeClusterDistances zpracovává clustery po jednom schválně - původně jsem to zvolil, protože to bylo jednodušší, ale spojení do jenoho volání kernelu se ukázalo být pomalejší než současná verze. Stejně tak jsem zkoušel i tile-wise průchod ve výpočtu similarity a takée se ukázal být pomalejší.

Program lze sestavit a spustit pomocí skriptu buildrun.sh.
