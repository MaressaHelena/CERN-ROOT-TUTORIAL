                // Tutorial 5: Ler o arquivo de entrada e preencher os dados no histograma //

void tut3()
{
	TH1F *hist = new TH1F("hist", "Histogram", 6, 1, 7);
	
	fstream file;
	file.open("data.txt");
	
	double value;
	
	while(1)
	{
		file >> value;
		hist->Fill(value);
		if(file.eof()) break;
	}
	
	file.close();
	
	hist->GetXaxis()->SetTitle("Grade");
	hist->GetYaxis()->SetTitle("Entries");
	
	TCanvas *c1 = new TCanvas();
	hist->Draw();
}
