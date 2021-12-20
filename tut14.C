                // Tutorial 16: Armazenamento e carregamento de objetos com TFile //

void tut14()
{
	TFile *file = new TFile("output.root", "Recreate");
	
	TH1F *hist = new TH1F("hist", "Histogram", 100, 0, 100);
	
	hist->Fill(10);
	hist->Fill(90);
	
	file->Write();
	
	file->Close();
}
