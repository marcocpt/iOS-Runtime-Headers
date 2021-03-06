/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface RMListItem : NSObject {
    unsigned int  _count;
    struct CGPDFNode {} ** _paragraphs;
    unsigned int  _pos;
}

@property (readonly) struct CGPDFPage { }*page;
@property (readonly) struct CGPDFNode {}**paragraphNodes;

- (void)addParagraph:(struct CGPDFNode { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (id)initWithCount:(unsigned int)arg1;
- (struct CGPDFPage { }*)page;
- (struct CGPDFNode {}**)paragraphNodes;

@end
