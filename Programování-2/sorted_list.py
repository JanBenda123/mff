#!/usr/bin/python3
# Jednosměrné uspořádané seznamy
# Na místa komentářů TODO doplňte svůj kód.

import sys


class Node:

    def __init__(self, x):
        # Každy prvek si pamatuje hodnotu a následníka
        self.value = x
        self.next = None


class SortedList:

    def __init__(self):
        # Seznam si pamatuje odkaz na svůj první prvek
        self.first = None

    def insert(self, x):
        """Zatřídí do seznamu nový prvek se zadanou hodnotou.
        Pokud už tam takový prvek je, neudělá nic.
        """
        x = Node(x)
        p = self
        if p.first == None:
            p.first = x
            return p
        ukazatel = p.first

        if ukazatel.value > x.value:
            x.next = ukazatel
            p.first = x
            return p
        if ukazatel.value == x.value:
            return p
        while ukazatel.next != None:
            if ukazatel.next.value > x.value:
                x.next = ukazatel.next
                ukazatel.next = x
                return p
            if ukazatel.next.value == x.value:
                return p
            ukazatel = ukazatel.next
        ukazatel.next = x
        return p

    def delete(self, x):
        """Odstraní ze seznamu prvek se zadanou hodnotou.
        Pokud tam žádný takový prvek není, neudělá nic.
        """
        x = Node(x)
        p = self
        if p.first == None:
            return None
        if p.first.value == x.value:
            p.first = p.first.next
            return p
        ukazatel = p.first
        while ukazatel.next.next != None:
            if ukazatel.next.value == x.value:
                ukazatel.next = ukazatel.next.next
                return p
            ukazatel = ukazatel.next
        if ukazatel.next.value == x.value:
            ukazatel.next = None

        return p

    def pred(self, x):
        """Vrátí předchůdce čísla x, tedy největší hodnotu v seznamu,
        která je ostře menší než x. Není-li taková, vrátí None.
        Číslo x může, ale nemusí být prvkem seznamu.
        """
        p = self
        if p.first.value == x:
            return None
        ukazatel = p.first
        while ukazatel.next != None:
            if ukazatel.next.value == x:
                return ukazatel.value
            ukazatel = ukazatel.next
        return None

    def succ(self, x):
        """Vrátí následníka čísla x, tedy nejmenší hodnotu v seznamu,
        která je ostře větší než x. Není-li taková, vrátí None.
        Číslo x může, ale nemusí být prvkem seznamu.
        """
        p = self
        ukazatel = p.first
        while ukazatel.next != None:
            if ukazatel.value == x:
                return ukazatel.next.value
            ukazatel = ukazatel.next
        return None

    def to_python_list(self):
        """Převede náš seznam na pythoní seznam."""

        out = []
        this = self.first
        while this:
            out.append(this.value)
            this = this.next

        return out

    def print(self):
        """Vypíše seznam."""

        print(self.to_python_list())
