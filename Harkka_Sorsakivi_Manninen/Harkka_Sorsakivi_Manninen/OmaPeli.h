#pragma once
#include "pelirajapinta.hh"
#include "include/include.hh"
#include "luettelotyypit.hh"

#include <vector>
#include <iostream>


namespace
Julkinen
{
	class OmaPeli :
		public Pelirajapinta
	{
	public:
		OmaPeli(int, int);
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
		int i_;
		int y_;
		Nayttorajapinta* _naytto = nullptr;
		Julkinen::Koordinaatti _koko;

		struct PelaajaTiedot
		{
			Julkinen::PelaajaTyyppi _tyyppi;
			std::string _nimi;
			char _merkki;
			Julkinen::Koordinaatti _sijainti;
		};

		std::vector<PelaajaTiedot> _pelaajat;
		unsigned int _pelaajienmaara;
	};
}

