#pragma once
#include "pelirajapinta.hh"

namespace
Julkinen
{
	class OmaPeli :
		public Pelirajapinta
	{
	public:
		OmaPeli();
		~OmaPeli();

		virtual bool onkoAlustustilassa() const;
		virtual void lisaaNaytto(Nayttorajapinta* naytto);
		virtual void maaritaPelialueenKoko(Julkinen::Koordinaatti const& koko);
		virtual void lisaaPelaaja(PelaajaTyyppi tyyppi, std::string const& nimi, char lyhenne, Julkinen::Koordinaatti const& sijainti);
		virtual void lisaaPala(PalaTyyppi pala, unsigned int rotaatio, Julkinen::Koordinaatti const& sijainti);
		virtual void lisaaEsine(char merkki, Julkinen::Koordinaatti const& sijainti, std::string const& pelaaja);
		virtual void asetaPalanTyyppi(Julkinen::ErikoispalaTyyppi tyyppi, Julkinen::Koordinaatti const& sijainti, Julkinen::Koordinaatti const& kohde = Julkinen::Koordinaatti());
		virtual void alustusLopeta();
		virtual bool onkoPelitilassa() const;
		virtual void komentoTyonna(Reuna reuna, unsigned int paikka, unsigned int rotaatio);
		virtual void komentoLiiku(Suunta suunta, unsigned int maara = 0);
		virtual bool vaihdaVuoro();
		virtual PelaajaTyyppi haeVuorossa();

	private:
		Nayttorajapinta* omanaytto_ = nullptr;
	};
}

