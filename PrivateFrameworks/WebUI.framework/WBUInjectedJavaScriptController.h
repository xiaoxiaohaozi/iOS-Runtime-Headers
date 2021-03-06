/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUInjectedJavaScriptController : NSObject <WBUInjectedJavaScriptObserver> {
    _WKRemoteObjectInterface * _activityJavaScriptObserverInterface;
    <WBUInjectedJavaScriptWebProcessController> * _activityProxy;
    NSMutableDictionary * _replyIdentifierToCompletionMap;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setUpActivityJavaScriptObserver;
- (id)_webProcessActivityProxy;
- (void)didRunJavaScriptForActivityWithResult:(id)arg1 replyIdentifier:(id)arg2;
- (id)initWithWebView:(id)arg1;
- (void)invalidate;
- (void)runJavaScriptForActivity:(id)arg1 withScript:(id)arg2 object:(id)arg3 invokeMethod:(id)arg4 completionHandler:(id /* block */)arg5;

@end
