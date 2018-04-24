#ifndef MARKDOWNEDITOR_H
#define MARKDOWNEDITOR_H

#include "baseeditor.h"
#include "utils.h"

class QAction;
class MarkdownAutoCompleter;
class MarkdownEditAreaWidget;

class MarkdownEditor : public BaseEditor
{
    Q_OBJECT

public:
    MarkdownEditor(MarkdownEditAreaWidget *parent=0);

protected:
    virtual void keyPressEvent(QKeyEvent *event);
    virtual void contextMenuEvent(QContextMenuEvent *e);
    virtual void dragEnterEvent(QDragEnterEvent *e);
    virtual void dragMoveEvent(QDragMoveEvent *e);
    virtual void dropEvent(QDropEvent *e);
public:
    void italicText();
    void boldText();
    void tabText();
    void untabText();
    void quoteText();
    void strikeThroughText();
    void insertLinkOrPicuture(int type, const QString &text, const QString &url,
                              const QString &title=QString(), const QString &width=QString(), const QString &height=QString());
    void insertCode(const QString &lan);
private:
    void replaceTextInCurrentCursor(const QString &text);
    enum {CLIPBOARD_TTEXT=1,CLIPBOARD_THTML=2,CLIPBOARD_TIMAGE=3,CLIPBOARD_TURL=4};
    bool checkClipboardHas( int type);
private slots:
    void copyAsHtmlSlot();
    void pasteAsHtmlSlot();
    void pasteAsImageSlot();
private:
    QList<QAction *> addSpellCheckActions(QMenu *menu);
    QList<QAction *> addSpellCheckLanguageActions(QMenu *menu);
private:
    MdCharmGlobal *mdcharmGlobalInstance;
    QAction *copyAsHtmlAction;
    QAction *pasteAsHtmlAction;
    QAction *pasteAsImageAction;
    MarkdownAutoCompleter *autoCompleter;
    MarkdownEditAreaWidget *parent;
};

#endif // MARKDOWNEDITOR_H
