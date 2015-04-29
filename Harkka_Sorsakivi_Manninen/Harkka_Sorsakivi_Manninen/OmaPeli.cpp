#include "OmaPeli.h"


using namespace Julkinen;

OmaPeli::OmaPeli(int iik, int jiik) :i_(iik), y_(jiik)
{
}


OmaPeli::~OmaPeli()
{
}

void OmaPeli::lisaaNaytto(Nayttorajapinta* naytto)
{
	omanaytto_ = naytto;
}

bool OmaPeli::onkoAlustustilassa() const
{
	return true;
}

void OmaPeli::maaritaPelialueenKoko(Julkinen::Koordinaatti const& koko)
{
	_koko = koko;
}
void OmaPeli::lisaaPelaaja(PelaajaTyyppi tyyppi, std::string const& nimi, char lyhenne, Julkinen::Koordinaatti const& sijainti)
{

}
void OmaPeli::lisaaPala(PalaTyyppi pala, unsigned int rotaatio, Julkinen::Koordinaatti const& sijainti)
{

}
void OmaPeli::lisaaEsine(char merkki, Julkinen::Koordinaatti const& sijainti, std::string const& pelaaja)
{

}
void OmaPeli::asetaPalanTyyppi(Julkinen::ErikoispalaTyyppi tyyppi, Julkinen::Koordinaatti const& sijainti, Julkinen::Koordinaatti const& kohde = Julkinen::Koordinaatti())
{

}
void OmaPeli::alustusLopeta()
{

}
bool OmaPeli::onkoPelitilassa() const
{
	return true;
}
void OmaPeli::komentoTyonna(Reuna reuna, unsigned int paikka, unsigned int rotaatio)
{

}
void OmaPeli::komentoLiiku(Suunta suunta, unsigned int maara = 0)
{

}
bool OmaPeli::vaihdaVuoro()
{
	return true;
}

PelaajaTyyppi OmaPeli::haeVuorossa()
{

}
