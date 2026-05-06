modded class PrinterMenu
{
    void SetSelectedPrint(string PrintDisplayName, string PrintName, int PrintTime, int FilamentAmount, int FilamentTier)
    {
        m_SelectedPrint.SetText(PrintDisplayName);
        m_SelectedPrintDN = PrintDisplayName;
        m_SelectedPrintN = PrintName;
        m_SelectedPrintT = PrintTime;
        m_SelectedPrintFA = FilamentAmount;

        if (FilamentTier == 1) { m_SelectedPrintFT = "Printer3D_Filament_T1_Blue"; }
    }
};