/*
 * Xournal++
 *
 * Declaration of all class types
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2 or later
 */

XOJ_DECLARE_TYPE(AutosaveJob, 1);
XOJ_DECLARE_TYPE(BlockingJob, 2);
XOJ_DECLARE_TYPE(ExportJob, 3);
XOJ_DECLARE_TYPE(ButtonConfig, 4);
XOJ_DECLARE_TYPE(Inertia, 5);
XOJ_DECLARE_TYPE(EditSelection, 6);
XOJ_DECLARE_TYPE(EraseHandler, 7);
XOJ_DECLARE_TYPE(ImageHandler, 8);
XOJ_DECLARE_TYPE(InputHandler, 9);
XOJ_DECLARE_TYPE(XMLAttribute, 10);
XOJ_DECLARE_TYPE(DoubleArrayAttribute, 11);
XOJ_DECLARE_TYPE(DoubleAttribute, 12);
XOJ_DECLARE_TYPE(ActionEnabledListener, 13);
XOJ_DECLARE_TYPE(ActionSelectionListener, 14);
XOJ_DECLARE_TYPE(ActionHandler, 15);
XOJ_DECLARE_TYPE(ClipboardHandler, 16);
XOJ_DECLARE_TYPE(Control, 17);
XOJ_DECLARE_TYPE(ExportHandler, 18);
XOJ_DECLARE_TYPE(AboutDialog, 19);
XOJ_DECLARE_TYPE(ButtonConfigGui, 20);
XOJ_DECLARE_TYPE(ExportDialog, 21);
XOJ_DECLARE_TYPE(FormatDialog, 22);
XOJ_DECLARE_TYPE(ImagesDialog, 23);
XOJ_DECLARE_TYPE(AbstractItem, 24);
XOJ_DECLARE_TYPE(AbstractToolItem, 25);
XOJ_DECLARE_TYPE(ColorToolItem, 26);
XOJ_DECLARE_TYPE(FontButton, 27);
XOJ_DECLARE_TYPE(Cursor, 28);
XOJ_DECLARE_TYPE(GladeGui, 29);
XOJ_DECLARE_TYPE(GladeSearchpath, 30);
XOJ_DECLARE_TYPE(EraseableStroke, 31);
XOJ_DECLARE_TYPE(EraseableStrokePart, 32);
XOJ_DECLARE_TYPE(Document, 33);
XOJ_DECLARE_TYPE(DocumentHandler, 34);
XOJ_DECLARE_TYPE(DocumentListener, 35);
XOJ_DECLARE_TYPE(Element, 36);
XOJ_DECLARE_TYPE(Font, 37);
XOJ_DECLARE_TYPE(Image, 38);
XOJ_DECLARE_TYPE(CairoPdf, 39);
XOJ_DECLARE_TYPE(ColorUndoAction, 40);
XOJ_DECLARE_TYPE(DeleteUndoAction, 41);
XOJ_DECLARE_TYPE(EraseUndoAction, 42);
XOJ_DECLARE_TYPE(FontUndoAction, 43);
XOJ_DECLARE_TYPE(InsertDeletePageUndoAction, 44);
XOJ_DECLARE_TYPE(ArrayIterator, 45);
XOJ_DECLARE_TYPE(DocumentView, 46);
XOJ_DECLARE_TYPE(XmlNode, 47);
XOJ_DECLARE_TYPE(XmlImageNode, 48);
XOJ_DECLARE_TYPE(XmlTextNode, 49);
XOJ_DECLARE_TYPE(PrintHandler, 50);
XOJ_DECLARE_TYPE(RecentManager, 51);
XOJ_DECLARE_TYPE(SaveHandler, 52);
XOJ_DECLARE_TYPE(ScrollHandler, 53);
XOJ_DECLARE_TYPE(PdfCacheEntry, 54);
XOJ_DECLARE_TYPE(PdfCache, 55);
XOJ_DECLARE_TYPE(LoadHandler, 56);
XOJ_DECLARE_TYPE(ParseException, 57);
XOJ_DECLARE_TYPE(SearchControl, 58);
XOJ_DECLARE_TYPE(SElement, 59);
XOJ_DECLARE_TYPE(Settings, 60);
XOJ_DECLARE_TYPE(__RefSElement, 61);
XOJ_DECLARE_TYPE(SAttribute, 62);
XOJ_DECLARE_TYPE(RecoSegment, 63);
XOJ_DECLARE_TYPE(ShapeRecognizer, 64);
XOJ_DECLARE_TYPE(ShapeRecognizerResult, 65);
XOJ_DECLARE_TYPE(Selection, 66);
XOJ_DECLARE_TYPE(RectSelection, 67);
XOJ_DECLARE_TYPE(RegionSelect, 68);
XOJ_DECLARE_TYPE(VerticalToolHandler, 69);
XOJ_DECLARE_TYPE(IntAttribute, 70);
XOJ_DECLARE_TYPE(TextAttribute, 71);
XOJ_DECLARE_TYPE(XmlPointNode, 72);
XOJ_DECLARE_TYPE(XmlStrokeNode, 73);
XOJ_DECLARE_TYPE(Tool, 74);
XOJ_DECLARE_TYPE(ZoomListener, 75);
XOJ_DECLARE_TYPE(ToolHandler, 76);
XOJ_DECLARE_TYPE(XournalMain, 77);
XOJ_DECLARE_TYPE(ZoomControl, 78);
XOJ_DECLARE_TYPE(Job, 79);
XOJ_DECLARE_TYPE(SaveJob, 80);
XOJ_DECLARE_TYPE(Scheduler, 81);
XOJ_DECLARE_TYPE(SynchronizedProgressListener, 82);
XOJ_DECLARE_TYPE(XournalScheduler, 83);
XOJ_DECLARE_TYPE(ImageView, 84);
XOJ_DECLARE_TYPE(ToolbarManageDialog, 85);
XOJ_DECLARE_TYPE(PdfPage, 86);
XOJ_DECLARE_TYPE(PdfPagesDialog, 87);
XOJ_DECLARE_TYPE(ColorEntry, 88);
XOJ_DECLARE_TYPE(SelectBackgroundColorDialog, 89);
XOJ_DECLARE_TYPE(SettingsDialog, 90);
XOJ_DECLARE_TYPE(PagePositionHandler, 91);
XOJ_DECLARE_TYPE(PagePositionCache, 92);
XOJ_DECLARE_TYPE(PagePosition, 93);
XOJ_DECLARE_TYPE(SidebarPreviewBaseEntry, 94);
XOJ_DECLARE_TYPE(Sidebar, 95);
XOJ_DECLARE_TYPE(ToolbarModel, 96);
XOJ_DECLARE_TYPE(ToolbarData, 97);
XOJ_DECLARE_TYPE(ToolZoomSlider, 98);
XOJ_DECLARE_TYPE(ToolSelectCombocontrol, 99);
XOJ_DECLARE_TYPE(ToolPageSpinner, 100);
XOJ_DECLARE_TYPE(ToolPageLayer, 101);
XOJ_DECLARE_TYPE(ToolMenuHandler, 102);
XOJ_DECLARE_TYPE(ToolButton, 103);
XOJ_DECLARE_TYPE(MenuItem, 104);
XOJ_DECLARE_TYPE(XournalView, 105);
XOJ_DECLARE_TYPE(SizeTAttribute, 106);
XOJ_DECLARE_TYPE(XojFont, 107);
XOJ_DECLARE_TYPE(InsertLayerUndoAction, 108);
XOJ_DECLARE_TYPE(PreviewJob, 109);
XOJ_DECLARE_TYPE(RenderJob, 110);
XOJ_DECLARE_TYPE(SearchBar, 111);
XOJ_DECLARE_TYPE(RepaintHandler, 112);
XOJ_DECLARE_TYPE(TextEditor, 113);
XOJ_DECLARE_TYPE(Layer, 114);
XOJ_DECLARE_TYPE(XojPage, 115);
XOJ_DECLARE_TYPE(XojPopplerPage, 116);
XOJ_DECLARE_TYPE(LinkDestination, 117);
XOJ_DECLARE_TYPE(Rectangle, 118);
XOJ_DECLARE_TYPE(ScaleUndoAction, 119);
XOJ_DECLARE_TYPE(Point, 120);
XOJ_DECLARE_TYPE(Stroke, 121);
XOJ_DECLARE_TYPE(TextUndoAction, 122);
XOJ_DECLARE_TYPE(InsertUndoAction, 123);
XOJ_DECLARE_TYPE(PdfWriter, 124);
XOJ_DECLARE_TYPE(XojPopplerAction, 125);
XOJ_DECLARE_TYPE(PdfXRef, 126);
XOJ_DECLARE_TYPE(UpdateRef, 127);
XOJ_DECLARE_TYPE(SizeUndoAction, 128);
XOJ_DECLARE_TYPE(SizeUndoActionEntry, 129);
XOJ_DECLARE_TYPE(XojPopplerIter, 130);
XOJ_DECLARE_TYPE(RefReplacement, 131);
XOJ_DECLARE_TYPE(PdfRefList, 132);
XOJ_DECLARE_TYPE(UndoAction, 133);
XOJ_DECLARE_TYPE(Range, 134);
XOJ_DECLARE_TYPE(Text, 135);
XOJ_DECLARE_TYPE(XojPopplerDocument, 136);
XOJ_DECLARE_TYPE(_IntPopplerDocument, 137);
XOJ_DECLARE_TYPE(StringTokenizer, 138);
XOJ_DECLARE_TYPE(InputStreamException, 139);
XOJ_DECLARE_TYPE(_RefStrInternal, 140);
XOJ_DECLARE_TYPE(PdfRefEntry, 141);
XOJ_DECLARE_TYPE(RemoveLayerUndoAction, 142);
XOJ_DECLARE_TYPE(RecognizerUndoAction, 143);
XOJ_DECLARE_TYPE(UndoRedoHandler, 144);
XOJ_DECLARE_TYPE(XojPageView, 145);
XOJ_DECLARE_TYPE(MainWindow, 146);
XOJ_DECLARE_TYPE(MetadataManager, 147);
XOJ_DECLARE_TYPE(MoveUndoAction, 148);
XOJ_DECLARE_TYPE(ObjectOutputStream, 149);
XOJ_DECLARE_TYPE(ObjectInputStream, 150);
XOJ_DECLARE_TYPE(PdfExport, 151);
XOJ_DECLARE_TYPE(GzOutputStream, 152);
XOJ_DECLARE_TYPE(PageBackgroundChangedUndoAction, 153);
XOJ_DECLARE_TYPE(PdfBookmarks, 154);
XOJ_DECLARE_TYPE(PdfObjectWriter, 155);
XOJ_DECLARE_TYPE(PdfExportJob, 156);
XOJ_DECLARE_TYPE(BackgroundImage, 157);
XOJ_DECLARE_TYPE(PartList, 158);
XOJ_DECLARE_TYPE(PageRangeEntry, 159);
XOJ_DECLARE_TYPE(PageViewIndex, 160);
XOJ_DECLARE_TYPE(PageViewIndexEntry, 161);
XOJ_DECLARE_TYPE(EditSelectionContents, 162);
XOJ_DECLARE_TYPE(PageLayerPosEntry, 163);
XOJ_DECLARE_TYPE(BackgroundImageContents, 164);
XOJ_DECLARE_TYPE(PageRef, 165);
XOJ_DECLARE_TYPE(ToolbarCustomizeDialog, 166);
XOJ_DECLARE_TYPE(HexObjectEncoding, 167);
XOJ_DECLARE_TYPE(BinObjectEncoding, 168);
XOJ_DECLARE_TYPE(ObjectEncoding, 169);
XOJ_DECLARE_TYPE(ToolbarDragDropHandler, 170);
XOJ_DECLARE_TYPE(ToolbarDragDropHelper, 171);
XOJ_DECLARE_TYPE(SidebarIndexPage, 172);
XOJ_DECLARE_TYPE(ScrollbarXournalWidgetListener, 173);
XOJ_DECLARE_TYPE(Scrollbar, 174);
XOJ_DECLARE_TYPE(Layout, 175);
XOJ_DECLARE_TYPE(LayoutData, 176);
XOJ_DECLARE_TYPE(ToolbarAdapter, 177);
XOJ_DECLARE_TYPE(SpinPageAdapter, 178);
XOJ_DECLARE_TYPE(XojColor, 179);
XOJ_DECLARE_TYPE(ToolbarEntry, 180);
XOJ_DECLARE_TYPE(ToolbarItem, 181);
XOJ_DECLARE_TYPE(CustomizeableColorList, 182);
XOJ_DECLARE_TYPE(GotoDialog, 183);
XOJ_DECLARE_TYPE(ToolbarColorNames, 184);
XOJ_DECLARE_TYPE(SidebarLayout, 185);
XOJ_DECLARE_TYPE(SidebarToolbar, 186);
XOJ_DECLARE_TYPE(SidebarPreviewBase, 187);
XOJ_DECLARE_TYPE(AbstractSidebarPage, 188);
XOJ_DECLARE_TYPE(TextBoxUndoAction, 189);
XOJ_DECLARE_TYPE(LatexGlade, 190);
XOJ_DECLARE_TYPE(TexImage, 191);
XOJ_DECLARE_TYPE(XmlTexNode, 192);
XOJ_DECLARE_TYPE(AddUndoAction, 193);
XOJ_DECLARE_TYPE(CopyUndoAction, 194);
XOJ_DECLARE_TYPE(InsertsUndoAction, 195);
XOJ_DECLARE_TYPE(SwapUndoAction, 196);
XOJ_DECLARE_TYPE(PageHandler, 198);
XOJ_DECLARE_TYPE(PageListener, 199);
XOJ_DECLARE_TYPE(ToolDrawCombocontrol, 200);
XOJ_DECLARE_TYPE(DoubleArrayBuffer, 201);
XOJ_DECLARE_TYPE(SidebarPreviewPages, 202);
XOJ_DECLARE_TYPE(SidebarPreviewLayers, 203);
XOJ_DECLARE_TYPE(SidebarPreviewPageEntry, 204);
XOJ_DECLARE_TYPE(SidebarPreviewLayerEntry, 205);
XOJ_DECLARE_TYPE(GtkColorWrapper, 206);
XOJ_DECLARE_TYPE(RulerHandler, 207);
XOJ_DECLARE_TYPE(StrokeHandler, 208);
XOJ_DECLARE_TYPE(ArrowHandler, 209);
XOJ_DECLARE_TYPE(CircleHandler, 210);
XOJ_DECLARE_TYPE(RectangleHandler, 211);
XOJ_DECLARE_TYPE(BaseStrokeHandler, 212);
XOJ_DECLARE_TYPE(BackgroundSelectDialogBase, 213);
XOJ_DECLARE_TYPE(BaseElementView, 214);
XOJ_DECLARE_TYPE(ImageElementView, 215);
XOJ_DECLARE_TYPE(PdfElementView, 216);
XOJ_DECLARE_TYPE(MainWindowToolbarMenu, 216);
XOJ_DECLARE_TYPE(LastSelectedTool, 217);
XOJ_DECLARE_TYPE(RepaintWidgetHandler, 218);
XOJ_DECLARE_TYPE(PageTemplateDialog, 219);
XOJ_DECLARE_TYPE(PageTemplateSettings, 220);

//XOJ_DECLARE_TYPE(XXXXXXXXXXXXXXXX, 206);
