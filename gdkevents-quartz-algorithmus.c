






<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
  <link rel="dns-prefetch" href="https://github.githubassets.com">
  <link rel="dns-prefetch" href="https://avatars0.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars1.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars2.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars3.githubusercontent.com">
  <link rel="dns-prefetch" href="https://github-cloud.s3.amazonaws.com">
  <link rel="dns-prefetch" href="https://user-images.githubusercontent.com/">



  <link crossorigin="anonymous" media="all" integrity="sha512-3+HOqCwtQal5hOJQ+mdxiq5zmGOTjF6RhjDsPLxbKDYgGlLFeCwzoIanb7j5IiCuXKUqyC2q8FdkC4nmx2P2rA==" rel="stylesheet" href="https://github.githubassets.com/assets/frameworks-a2fba223d5af91496cac70d4ec3624df.css" />
  <link crossorigin="anonymous" media="all" integrity="sha512-OtdxTByWNKa5cJls+9iFyHPNBFmANuTK0UXlXrJW9h0zrFzsVK1QIY1L18W/E2XUr/pOFa0V4ZClRjpgcnQulA==" rel="stylesheet" href="https://github.githubassets.com/assets/site-148e617d8b0d0d490d3c4030fa22fa7a.css" />
    <link crossorigin="anonymous" media="all" integrity="sha512-eYWZg9ymnEaPr4GujmiPfycYl54iuDr4yvW6+nNRSzU55/DnvlzhG+pNrz4AUegFXXjtfaovzUp9aN+8pMcjBg==" rel="stylesheet" href="https://github.githubassets.com/assets/github-38644929084f4e5a1e66cb57d7647cef.css" />
    
    
    
    

  <meta name="viewport" content="width=device-width">
  
  <title>Patched gdkevents-quartz for OSX tablet support · GitHub</title>
    <meta name="description" content="Patched gdkevents-quartz for OSX tablet support. GitHub Gist: instantly share code, notes, and snippets.">
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch-gist.xml" title="Gist">
  <link rel="fluid-icon" href="https://gist.github.com/fluidicon.png" title="GitHub">
  <meta property="fb:app_id" content="1401488693436528">

    <meta name="twitter:image:src" content="https://avatars1.githubusercontent.com/u/1664574?s=400&amp;v=4" /><meta name="twitter:site" content="@github" /><meta name="twitter:card" content="summary_large_image" /><meta name="twitter:title" content="Patched gdkevents-quartz for OSX tablet support" /><meta name="twitter:description" content="Patched gdkevents-quartz for OSX tablet support. GitHub Gist: instantly share code, notes, and snippets." />
    <meta property="og:image" content="https://avatars1.githubusercontent.com/u/1664574?s=400&amp;v=4" /><meta property="og:site_name" content="Gist" /><meta property="og:type" content="article" /><meta property="og:title" content="Patched gdkevents-quartz for OSX tablet support" /><meta property="og:url" content="https://gist.github.com/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21" /><meta property="og:description" content="Patched gdkevents-quartz for OSX tablet support. GitHub Gist: instantly share code, notes, and snippets." /><meta property="article:author" content="262588213843476" /><meta property="article:publisher" content="262588213843476" />

  <link rel="assets" href="https://github.githubassets.com/">
  
  <meta name="pjax-timeout" content="1000">
  
  <meta name="request-id" content="9144:1452:21D339:3B9CED:5CD47029" data-pjax-transient>


  

  <meta name="selected-link" value="gist_code" data-pjax-transient>

      <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
    <meta name="google-site-verification" content="ZzhVyEFwb7w3e0-uOTltm8Jsck2F5StVihD0exw2fsA">
    <meta name="google-site-verification" content="GXs5KoUUkNCoaAZn7wPN-t01Pywp9M3sEjnt_3_ZWPc">

  <meta name="octolytics-host" content="collector.githubapp.com" /><meta name="octolytics-app-id" content="gist" /><meta name="octolytics-event-url" content="https://collector.githubapp.com/github-external/browser_event" /><meta name="octolytics-dimension-request_id" content="9144:1452:21D339:3B9CED:5CD47029" /><meta name="octolytics-dimension-region_edge" content="iad" /><meta name="octolytics-dimension-region_render" content="iad" />
<meta name="analytics-location" content="/&lt;user-name&gt;/&lt;gist-id&gt;" data-pjax-transient="true" />



    <meta name="google-analytics" content="UA-3769691-4">


<meta class="js-ga-set" name="dimension1" content="Logged Out">



    <meta name="octolytics-dimension-public" content="true" /><meta name="octolytics-dimension-gist_id" content="35051006" /><meta name="octolytics-dimension-gist_name" content="7bfdbc6ac6ba18d254840299a218fe21" /><meta name="octolytics-dimension-anonymous" content="false" /><meta name="octolytics-dimension-owner_id" content="1664574" /><meta name="octolytics-dimension-owner_login" content="Algorithmus" /><meta name="octolytics-dimension-forked" content="false" />

  <meta class="js-ga-set" name="dimension5" content="public">
  <meta class="js-ga-set" name="dimension6" content="owned">
  <meta class="js-ga-set" name="dimension7" content="c">


      <meta name="hostname" content="gist.github.com">
    <meta name="user-login" content="">

      <meta name="expected-hostname" content="gist.github.com">
    <meta name="js-proxy-site-detection-payload" content="MWNiYzU0ZWNiMTg5MjBjYmYxMzg1NWU1OWE3MTNjMTE2YWM5OWIwZTY3MDFjMmZmYjJlYTYxOTVhMDY0MjcxY3x7InJlbW90ZV9hZGRyZXNzIjoiNjguMTg3LjQ3LjE5NyIsInJlcXVlc3RfaWQiOiI5MTQ0OjE0NTI6MjFEMzM5OjNCOUNFRDo1Q0Q0NzAyOSIsInRpbWVzdGFtcCI6MTU1NzQyNjIxNywiaG9zdCI6ImdpdGh1Yi5jb20ifQ==">

    <meta name="enabled-features" content="UNIVERSE_BANNER,MARKETPLACE_INVOICED_BILLING,MARKETPLACE_SOCIAL_PROOF_CUSTOMERS,MARKETPLACE_TRENDING_SOCIAL_PROOF,MARKETPLACE_RECOMMENDATIONS">

  <meta name="html-safe-nonce" content="9f534d3447c6bee9af549d1e9244aa18fd48e877">

  <meta http-equiv="x-pjax-version" content="b100fc3000b9630c2266c94f7f22f3da">
  

      <link href="/Algorithmus.atom" rel="alternate" title="atom" type="application/atom+xml">

  <link crossorigin="anonymous" media="all" integrity="sha512-NUhQ3mLtAlFJEb10FB8PxyvFdbAxTQm1Iad3kv0KuoHaxSrSjM467jACk+r8ynB2o/x6pdZc78vQ5bhDEz5wUg==" rel="stylesheet" href="https://github.githubassets.com/assets/gist-1eef7c7d06e116536d30264ccdff28f6.css" />




  <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">

  <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">

  <link rel="mask-icon" href="https://github.githubassets.com/pinned-octocat.svg" color="#000000">
  <link rel="icon" type="image/x-icon" class="js-site-favicon" href="https://github.githubassets.com/favicon.ico">

<meta name="theme-color" content="#1e2327">






  </head>

  <body class="logged-out env-production">
    

  <div class="position-relative js-header-wrapper ">
    <a href="#start-of-content" tabindex="1" class="px-2 py-4 bg-blue text-white show-on-focus js-skip-to-content">Skip to content</a>
    <div id="js-pjax-loader-bar" class="pjax-loader-bar"><div class="progress"></div></div>

    
    
    


        <div class="Header" role="banner" >
  <div class="Header-item">
    <a class="Header-link" data-hotkey="g d" aria-label="Gist Homepage" href="/">
  <svg class="octicon octicon-mark-github v-align-middle d-none" height="24" viewBox="0 0 16 16" version="1.1" width="24" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"/></svg>
  <svg height="24" class="octicon octicon-logo-github v-align-middle" viewBox="0 0 45 16" version="1.1" width="67" aria-hidden="true"><path fill-rule="evenodd" d="M18.53 12.03h-.02c.009 0 .015.01.024.011h.006l-.01-.01zm.004.011c-.093.001-.327.05-.574.05-.78 0-1.05-.36-1.05-.83V8.13h1.59c.09 0 .16-.08.16-.19v-1.7c0-.09-.08-.17-.16-.17h-1.59V3.96c0-.08-.05-.13-.14-.13h-2.16c-.09 0-.14.05-.14.13v2.17s-1.09.27-1.16.28c-.08.02-.13.09-.13.17v1.36c0 .11.08.19.17.19h1.11v3.28c0 2.44 1.7 2.69 2.86 2.69.53 0 1.17-.17 1.27-.22.06-.02.09-.09.09-.16v-1.5a.177.177 0 0 0-.146-.18zM42.23 9.84c0-1.81-.73-2.05-1.5-1.97-.6.04-1.08.34-1.08.34v3.52s.49.34 1.22.36c1.03.03 1.36-.34 1.36-2.25zm2.43-.16c0 3.43-1.11 4.41-3.05 4.41-1.64 0-2.52-.83-2.52-.83s-.04.46-.09.52c-.03.06-.08.08-.14.08h-1.48c-.1 0-.19-.08-.19-.17l.02-11.11c0-.09.08-.17.17-.17h2.13c.09 0 .17.08.17.17v3.77s.82-.53 2.02-.53l-.01-.02c1.2 0 2.97.45 2.97 3.88zm-8.72-3.61h-2.1c-.11 0-.17.08-.17.19v5.44s-.55.39-1.3.39-.97-.34-.97-1.09V6.25c0-.09-.08-.17-.17-.17h-2.14c-.09 0-.17.08-.17.17v5.11c0 2.2 1.23 2.75 2.92 2.75 1.39 0 2.52-.77 2.52-.77s.05.39.08.45c.02.05.09.09.16.09h1.34c.11 0 .17-.08.17-.17l.02-7.47c0-.09-.08-.17-.19-.17zm-23.7-.01h-2.13c-.09 0-.17.09-.17.2v7.34c0 .2.13.27.3.27h1.92c.2 0 .25-.09.25-.27V6.23c0-.09-.08-.17-.17-.17zm-1.05-3.38c-.77 0-1.38.61-1.38 1.38 0 .77.61 1.38 1.38 1.38.75 0 1.36-.61 1.36-1.38 0-.77-.61-1.38-1.36-1.38zm16.49-.25h-2.11c-.09 0-.17.08-.17.17v4.09h-3.31V2.6c0-.09-.08-.17-.17-.17h-2.13c-.09 0-.17.08-.17.17v11.11c0 .09.09.17.17.17h2.13c.09 0 .17-.08.17-.17V8.96h3.31l-.02 4.75c0 .09.08.17.17.17h2.13c.09 0 .17-.08.17-.17V2.6c0-.09-.08-.17-.17-.17zM8.81 7.35v5.74c0 .04-.01.11-.06.13 0 0-1.25.89-3.31.89-2.49 0-5.44-.78-5.44-5.92S2.58 1.99 5.1 2c2.18 0 3.06.49 3.2.58.04.05.06.09.06.14L7.94 4.5c0 .09-.09.2-.2.17-.36-.11-.9-.33-2.17-.33-1.47 0-3.05.42-3.05 3.73s1.5 3.7 2.58 3.7c.92 0 1.25-.11 1.25-.11v-2.3H4.88c-.11 0-.19-.08-.19-.17V7.35c0-.09.08-.17.19-.17h3.74c.11 0 .19.08.19.17z"/></svg>
  <svg height="24" class="octicon octicon-logo-gist v-align-middle" viewBox="0 0 25 16" version="1.1" width="37" aria-hidden="true"><path fill-rule="evenodd" d="M4.7 8.73h2.45v4.02c-.55.27-1.64.34-2.53.34-2.56 0-3.47-2.2-3.47-5.05 0-2.85.91-5.06 3.48-5.06 1.28 0 2.06.23 3.28.73V2.66C7.27 2.33 6.25 2 4.63 2 1.13 2 0 4.69 0 8.03c0 3.34 1.11 6.03 4.63 6.03 1.64 0 2.81-.27 3.59-.64V7.73H4.7v1zm6.39 3.72V6.06h-1.05v6.28c0 1.25.58 1.72 1.72 1.72v-.89c-.48 0-.67-.16-.67-.7v-.02zm.25-8.72c0-.44-.33-.78-.78-.78s-.77.34-.77.78.33.78.77.78.78-.34.78-.78zm4.34 5.69c-1.5-.13-1.78-.48-1.78-1.17 0-.77.33-1.34 1.88-1.34 1.05 0 1.66.16 2.27.36v-.94c-.69-.3-1.52-.39-2.25-.39-2.2 0-2.92 1.2-2.92 2.31 0 1.08.47 1.88 2.73 2.08 1.55.13 1.77.63 1.77 1.34 0 .73-.44 1.42-2.06 1.42-1.11 0-1.86-.19-2.33-.36v.94c.5.2 1.58.39 2.33.39 2.38 0 3.14-1.2 3.14-2.41 0-1.28-.53-2.03-2.75-2.23h-.03zm8.58-2.47v-.86h-2.42v-2.5l-1.08.31v2.11l-1.56.44v.48h1.56v5c0 1.53 1.19 2.13 2.5 2.13.19 0 .52-.02.69-.05v-.89c-.19.03-.41.03-.61.03-.97 0-1.5-.39-1.5-1.34V6.94h2.42v.02-.01z"/></svg>
</a>
  </div>


  <div class="Header-item Header-item--full js-site-search">
      <div class="header-search mr-3">

<!-- '"` --><!-- </textarea></xmp> --></option></form><form class="position-relative js-quicksearch-form" role="search" aria-label="Site" action="/search" accept-charset="UTF-8" method="get"><input name="utf8" type="hidden" value="&#x2713;" />
  <div class="header-search-wrapper form-control input-sm js-chromeless-input-container">
    <input type="text"
      class="form-control input-sm js-site-search-focus header-search-input"
      data-hotkey="s,/"
      name="q"
      aria-label="Search"
      placeholder="Search…"
      autocorrect="off"
      autocomplete="off"
      autocapitalize="off">
  </div>

</form></div>


    <nav aria-label="Global" class="d-flex">
  <a class="Header-link mr-3" data-ga-click="Header, go to all gists, text:all gists" href="/discover">All gists</a>

  <a class="Header-link mr-3" data-ga-click="Header, go to GitHub, text:Back to GitHub" href="https://github.com">Back to GitHub</a>


</nav>

  </div>




    <div class="Header-item f4 mr-0" role="navigation">
      <a class="HeaderMenu-link no-underline mr-3" data-hydro-click="{&quot;event_type&quot;:&quot;authentication.click&quot;,&quot;payload&quot;:{&quot;location_in_page&quot;:&quot;gist header&quot;,&quot;repository_id&quot;:null,&quot;auth_type&quot;:&quot;LOG_IN&quot;,&quot;client_id&quot;:null,&quot;originating_request_id&quot;:&quot;9144:1452:21D339:3B9CED:5CD47029&quot;,&quot;originating_url&quot;:&quot;https://gist.github.com/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21&quot;,&quot;referrer&quot;:null,&quot;user_id&quot;:null}}" data-hydro-click-hmac="173bd6ee68510ef167f24517bd65b8afdd42340482d99143dc1b8f86b5c9a9e5" data-ga-click="Header, sign in" href="https://gist.github.com/auth/github?return_to=https%3A%2F%2Fgist.github.com%2FAlgorithmus%2F7bfdbc6ac6ba18d254840299a218fe21">
        Sign&nbsp;in
</a>        <a class="HeaderMenu-link d-inline-block no-underline border border-gray-dark rounded-1 px-2 py-1" data-hydro-click="{&quot;event_type&quot;:&quot;authentication.click&quot;,&quot;payload&quot;:{&quot;location_in_page&quot;:&quot;gist header&quot;,&quot;repository_id&quot;:null,&quot;auth_type&quot;:&quot;SIGN_UP&quot;,&quot;client_id&quot;:null,&quot;originating_request_id&quot;:&quot;9144:1452:21D339:3B9CED:5CD47029&quot;,&quot;originating_url&quot;:&quot;https://gist.github.com/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21&quot;,&quot;referrer&quot;:null,&quot;user_id&quot;:null}}" data-hydro-click-hmac="2c91fee827e9a4487562273fc1185153d8bab9ad97baec3fa2cf386977f74af2" data-ga-click="Header, sign up" href="/join?source=header-gist">
          Sign&nbsp;up
</a>    </div>
</div>



  </div>

  <div id="start-of-content" class="show-on-focus"></div>


    <div id="js-flash-container">

</div>



  <div class="application-main " data-commit-hovercards-enabled>
        <div itemscope itemtype="http://schema.org/Code">
    <main id="gist-pjax-container" class="gist-content-wrapper" data-pjax-container>
      


  <div class="gist-detail-intro gist-banner">
    <div class="container-lg px-3">
      <p class="lead">
        Instantly share code, notes, and snippets.
      </p>
    </div>
  </div>


<div class="gisthead pagehead repohead instapaper_ignore readability-menu experiment-repo-nav pt-3 mb-4">
  <div class="container-lg px-3">
    
  
<div class="mb-3 d-flex">

  <h1 class="public css-truncate float-none flex-auto width-fit pl-0">
    <a class="avatar mr-1" data-hovercard-type="user" data-hovercard-url="/hovercards?user_id=1664574" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/Algorithmus"><img src="https://avatars3.githubusercontent.com/u/1664574?s=52&amp;v=4" width="26" height="26" alt="@Algorithmus" /></a>
    <span class="author"><a data-hovercard-type="user" data-hovercard-url="/hovercards?user_id=1664574" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/Algorithmus">Algorithmus</a></span><!--
        --><span class="path-divider">/</span><!--
        --><strong itemprop="name" class="gist-header-title css-truncate-target"><a href="/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21">gdkevents-quartz.c</a></strong>

    <div class="d-block text-small text-gray">
      Last active <time-ago datetime="2016-05-01T00:02:29Z">May 1, 2016</time-ago>
    </div>
  </h1>

  <ul class="pagehead-actions float-none">



    <li>
        <a class="btn btn-sm btn-with-count tooltipped tooltipped-n" aria-label="You must be signed in to star a gist" rel="nofollow" data-hydro-click="{&quot;event_type&quot;:&quot;authentication.click&quot;,&quot;payload&quot;:{&quot;location_in_page&quot;:&quot;gist star button&quot;,&quot;repository_id&quot;:null,&quot;auth_type&quot;:&quot;LOG_IN&quot;,&quot;client_id&quot;:null,&quot;originating_request_id&quot;:&quot;9144:1452:21D339:3B9CED:5CD47029&quot;,&quot;originating_url&quot;:&quot;https://gist.github.com/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21&quot;,&quot;referrer&quot;:null,&quot;user_id&quot;:null}}" data-hydro-click-hmac="40717e5d61c94c3ba39856f6784dfbedb19e060f145ffde93289e607580ac349" href="/login?return_to=https%3A%2F%2Fgist.github.com%2FAlgorithmus%2F7bfdbc6ac6ba18d254840299a218fe21">
    <svg class="octicon octicon-star" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74L14 6z"/></svg>
    Star
</a>
  <a class="social-count" aria-label="0 users starred this gist" href="/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21/stargazers">
    0
</a>
    </li>

      <li>
          <a class="btn btn-sm btn-with-count tooltipped tooltipped-n" aria-label="You must be signed in to fork a gist" rel="nofollow" data-hydro-click="{&quot;event_type&quot;:&quot;authentication.click&quot;,&quot;payload&quot;:{&quot;location_in_page&quot;:&quot;gist fork button&quot;,&quot;repository_id&quot;:null,&quot;auth_type&quot;:&quot;LOG_IN&quot;,&quot;client_id&quot;:null,&quot;originating_request_id&quot;:&quot;9144:1452:21D339:3B9CED:5CD47029&quot;,&quot;originating_url&quot;:&quot;https://gist.github.com/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21&quot;,&quot;referrer&quot;:null,&quot;user_id&quot;:null}}" data-hydro-click-hmac="63d85fef6c54b99691550f4c024e6d4b0087cd20eb1890d3a3500b8b2318d5cb" href="/login?return_to=https%3A%2F%2Fgist.github.com%2FAlgorithmus%2F7bfdbc6ac6ba18d254840299a218fe21">
    <svg class="octicon octicon-repo-forked" viewBox="0 0 10 16" version="1.1" width="10" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 1a1.993 1.993 0 0 0-1 3.72V6L5 8 3 6V4.72A1.993 1.993 0 0 0 2 1a1.993 1.993 0 0 0-1 3.72V6.5l3 3v1.78A1.993 1.993 0 0 0 5 15a1.993 1.993 0 0 0 1-3.72V9.5l3-3V4.72A1.993 1.993 0 0 0 8 1zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3 10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3-10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
    Fork
</a>    <span class="social-count">0</span>

      </li>
  </ul>

</div>

<div class="d-flex">
  <div class="flex-auto">
    <nav class="reponav js-repo-nav js-sidenav-container-pjax"
     aria-label="Gist"
     data-pjax="#gist-pjax-container">

  <a class="js-selected-navigation-item selected reponav-item" data-pjax="true" data-hotkey="g c" aria-current="page" data-selected-links="gist_code /Algorithmus/7bfdbc6ac6ba18d254840299a218fe21" href="/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21">
    <svg class="octicon octicon-code" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M9.5 3L8 4.5 11.5 8 8 11.5 9.5 13 14 8 9.5 3zm-5 0L0 8l4.5 5L6 11.5 2.5 8 6 4.5 4.5 3z"/></svg>
    Code
</a>
    <a class="js-selected-navigation-item reponav-item" data-pjax="true" data-hotkey="g r" data-selected-links="gist_revisions /Algorithmus/7bfdbc6ac6ba18d254840299a218fe21/revisions" href="/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21/revisions">
      <svg class="octicon octicon-git-commit" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M10.86 7c-.45-1.72-2-3-3.86-3-1.86 0-3.41 1.28-3.86 3H0v2h3.14c.45 1.72 2 3 3.86 3 1.86 0 3.41-1.28 3.86-3H14V7h-3.14zM7 10.2c-1.22 0-2.2-.98-2.2-2.2 0-1.22.98-2.2 2.2-2.2 1.22 0 2.2.98 2.2 2.2 0 1.22-.98 2.2-2.2 2.2z"/></svg>
      Revisions
      <span class="Counter">2</span>
</a>

</nav>

  </div>

  <div class="file-navigation-options" data-multiple>

    <div class="file-navigation-option v-align-middle">

  <div class="input-group">
    <div class="input-group-button">
      <details class="details-reset details-overlay select-menu">
        <summary class="btn btn-sm select-menu-button" data-ga-click="Repository, clone Embed, location:repo overview">
          <span data-menu-button>Embed</span>
        </summary>
        <details-menu
          class="select-menu-modal position-absolute"
          data-menu-input="gist-share-url"
          style="z-index: 99;" aria-label="Clone options">
          <div class="select-menu-header">
            <span class="select-menu-title">What would you like to do?</span>
          </div>
          <div class="select-menu-list">
              <button name="button" type="button" class="select-menu-item width-full" aria-checked="true" role="menuitemradio" value="&lt;script src=&quot;https://gist.github.com/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21.js&quot;&gt;&lt;/script&gt;" data-hydro-click="{&quot;event_type&quot;:&quot;clone_or_download.click&quot;,&quot;payload&quot;:{&quot;feature_clicked&quot;:&quot;EMBED&quot;,&quot;git_repository_type&quot;:&quot;GIST&quot;,&quot;gist_id&quot;:35051006,&quot;client_id&quot;:null,&quot;originating_request_id&quot;:&quot;9144:1452:21D339:3B9CED:5CD47029&quot;,&quot;originating_url&quot;:&quot;https://gist.github.com/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21&quot;,&quot;referrer&quot;:null,&quot;user_id&quot;:null}}" data-hydro-click-hmac="7d26f59d042376f2da7488142121f50a2c6a859d81d4129c661760afa38b86a8">
                <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
                <div class="select-menu-item-text">
                  <span class="select-menu-item-heading" data-menu-button-text>
                    
                    Embed
                  </span>
                    <span class="description">
                      Embed this gist in your website.
                    </span>
                </div>
</button>              <button name="button" type="button" class="select-menu-item width-full" aria-checked="false" role="menuitemradio" value="https://gist.github.com/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21" data-hydro-click="{&quot;event_type&quot;:&quot;clone_or_download.click&quot;,&quot;payload&quot;:{&quot;feature_clicked&quot;:&quot;SHARE&quot;,&quot;git_repository_type&quot;:&quot;GIST&quot;,&quot;gist_id&quot;:35051006,&quot;client_id&quot;:null,&quot;originating_request_id&quot;:&quot;9144:1452:21D339:3B9CED:5CD47029&quot;,&quot;originating_url&quot;:&quot;https://gist.github.com/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21&quot;,&quot;referrer&quot;:null,&quot;user_id&quot;:null}}" data-hydro-click-hmac="0ff8d28781de77b2df3bc4ccce29975bcb90ac44585cfa04f8b28ae8a53def8f">
                <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
                <div class="select-menu-item-text">
                  <span class="select-menu-item-heading" data-menu-button-text>
                    
                    Share
                  </span>
                    <span class="description">
                      Copy sharable link for this gist.
                    </span>
                </div>
</button>              <button name="button" type="button" class="select-menu-item width-full" aria-checked="false" role="menuitemradio" value="https://gist.github.com/7bfdbc6ac6ba18d254840299a218fe21.git" data-hydro-click="{&quot;event_type&quot;:&quot;clone_or_download.click&quot;,&quot;payload&quot;:{&quot;feature_clicked&quot;:&quot;USE_HTTPS&quot;,&quot;git_repository_type&quot;:&quot;GIST&quot;,&quot;gist_id&quot;:35051006,&quot;client_id&quot;:null,&quot;originating_request_id&quot;:&quot;9144:1452:21D339:3B9CED:5CD47029&quot;,&quot;originating_url&quot;:&quot;https://gist.github.com/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21&quot;,&quot;referrer&quot;:null,&quot;user_id&quot;:null}}" data-hydro-click-hmac="7c7e8df011a592f6e100eb0214a643f27cec4686ac07485dd8423d8dba830623">
                <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
                <div class="select-menu-item-text">
                  <span class="select-menu-item-heading" data-menu-button-text>
                    Clone via
                    HTTPS
                  </span>
                    <span class="description">
                      Clone with Git or checkout with SVN using the repository’s web address.
                    </span>
                </div>
</button>          </div>
          <div class="select-menu-list">
            <a role="menuitem" class="select-menu-item select-menu-action" href="https://help.github.com/articles/which-remote-url-should-i-use" target="_blank">
              <svg class="octicon octicon-question select-menu-item-icon" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M6 10h2v2H6v-2zm4-3.5C10 8.64 8 9 8 9H6c0-.55.45-1 1-1h.5c.28 0 .5-.22.5-.5v-1c0-.28-.22-.5-.5-.5h-1c-.28 0-.5.22-.5.5V7H4c0-1.5 1.5-3 3-3s3 1 3 2.5zM7 2.3c3.14 0 5.7 2.56 5.7 5.7s-2.56 5.7-5.7 5.7A5.71 5.71 0 0 1 1.3 8c0-3.14 2.56-5.7 5.7-5.7zM7 1C3.14 1 0 4.14 0 8s3.14 7 7 7 7-3.14 7-7-3.14-7-7-7z"/></svg>
              <div class="select-menu-item-text">
                Learn more about clone URLs
              </div>
            </a>
          </div>
        </details-menu>
      </details>
    </div>

    <input
      id="gist-share-url"
      type="text"
      data-autoselect
      class="form-control input-monospace input-sm"
      value="&lt;script src=&quot;https://gist.github.com/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21.js&quot;&gt;&lt;/script&gt;"
      aria-label="Clone this repository at &lt;script src=&quot;https://gist.github.com/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21.js&quot;&gt;&lt;/script&gt;"
      readonly>

    <div class="input-group-button">
      <clipboard-copy for="gist-share-url" aria-label="Copy to clipboard" class="btn btn-sm zeroclipboard-button" data-hydro-click="{&quot;event_type&quot;:&quot;clone_or_download.click&quot;,&quot;payload&quot;:{&quot;feature_clicked&quot;:&quot;COPY_URL&quot;,&quot;git_repository_type&quot;:&quot;GIST&quot;,&quot;gist_id&quot;:35051006,&quot;client_id&quot;:null,&quot;originating_request_id&quot;:&quot;9144:1452:21D339:3B9CED:5CD47029&quot;,&quot;originating_url&quot;:&quot;https://gist.github.com/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21&quot;,&quot;referrer&quot;:null,&quot;user_id&quot;:null}}" data-hydro-click-hmac="5413070ef1302cc2e259c764295037ccb79ffd7aa9fdb37ac9b0ee2851ca45b3"><svg class="octicon octicon-clippy" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M2 13h4v1H2v-1zm5-6H2v1h5V7zm2 3V8l-3 3 3 3v-2h5v-2H9zM4.5 9H2v1h2.5V9zM2 12h2.5v-1H2v1zm9 1h1v2c-.02.28-.11.52-.3.7-.19.18-.42.28-.7.3H1c-.55 0-1-.45-1-1V4c0-.55.45-1 1-1h3c0-1.11.89-2 2-2 1.11 0 2 .89 2 2h3c.55 0 1 .45 1 1v5h-1V6H1v9h10v-2zM2 5h8c0-.55-.45-1-1-1H8c-.55 0-1-.45-1-1s-.45-1-1-1-1 .45-1 1-.45 1-1 1H3c-.55 0-1 .45-1 1z"/></svg></clipboard-copy>
    </div>
  </div>
</div>


    <div class="file-navigation-option">
</div>


    <div class="file-navigation-option">
      <a class="btn btn-sm" rel="nofollow" data-hydro-click="{&quot;event_type&quot;:&quot;clone_or_download.click&quot;,&quot;payload&quot;:{&quot;feature_clicked&quot;:&quot;DOWNLOAD_ZIP&quot;,&quot;git_repository_type&quot;:&quot;GIST&quot;,&quot;gist_id&quot;:35051006,&quot;client_id&quot;:null,&quot;originating_request_id&quot;:&quot;9144:1452:21D339:3B9CED:5CD47029&quot;,&quot;originating_url&quot;:&quot;https://gist.github.com/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21&quot;,&quot;referrer&quot;:null,&quot;user_id&quot;:null}}" data-hydro-click-hmac="d4c1704409bcdd4b6a39079747c12e2f7d4b41b0916b7064aaeeebc514a069cd" data-ga-click="Gist, download zip, location:gist overview" href="/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21/archive/9b6eea278f93e38fd54a8da067c8102c310fa668.zip">Download ZIP</a>
    </div>
  </div>
</div>


  </div>
</div>

<div class="container-lg px-3 new-discussion-timeline experiment-repo-nav">
  <div class="repository-content gist-content">
    
  <div>
      <div itemprop="about">
    Patched gdkevents-quartz for OSX tablet support
  </div>


        <div class="js-gist-file-update-container js-task-list-container file-box">
  <div id="file-gdkevents-quartz-c" class="file">
      <div class="file-header">
        <div class="file-actions">

          <a class="btn btn-sm " href="/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21/raw/9b6eea278f93e38fd54a8da067c8102c310fa668/gdkevents-quartz.c">Raw</a>
        </div>
        <div class="file-info">
          <span class="icon">
            <svg class="octicon octicon-gist" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.5 5L10 7.5 7.5 10l-.75-.75L8.5 7.5 6.75 5.75 7.5 5zm-3 0L2 7.5 4.5 10l.75-.75L3.5 7.5l1.75-1.75L4.5 5zM0 13V2c0-.55.45-1 1-1h10c.55 0 1 .45 1 1v11c0 .55-.45 1-1 1H1c-.55 0-1-.45-1-1zm1 0h10V2H1v11z"/></svg>
          </span>
          <a class="css-truncate" href="#file-gdkevents-quartz-c">
            <strong class="user-select-contain gist-blob-name css-truncate-target">
              gdkevents-quartz.c
            </strong>
          </a>
        </div>
      </div>
    

  <div itemprop="text" class="Box-body p-0 blob-wrapper data type-c ">
      
<table class="highlight tab-size js-file-line-container" data-tab-size="8">
      <tr>
        <td id="file-gdkevents-quartz-c-L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="file-gdkevents-quartz-c-LC1" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> gdkevents-quartz.c</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="file-gdkevents-quartz-c-LC2" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="file-gdkevents-quartz-c-LC3" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Copyright (C) 1995-1997 Peter Mattis, Spencer Kimball and Josh MacDonald</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="file-gdkevents-quartz-c-LC4" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Copyright (C) 1998-2002 Tor Lillqvist</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="file-gdkevents-quartz-c-LC5" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Copyright (C) 2005-2008 Imendio AB</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="file-gdkevents-quartz-c-LC6" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="file-gdkevents-quartz-c-LC7" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * This library is free software; you can redistribute it and/or</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="file-gdkevents-quartz-c-LC8" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * modify it under the terms of the GNU Lesser General Public</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="file-gdkevents-quartz-c-LC9" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * License as published by the Free Software Foundation; either</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="file-gdkevents-quartz-c-LC10" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * version 2 of the License, or (at your option) any later version.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="file-gdkevents-quartz-c-LC11" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="file-gdkevents-quartz-c-LC12" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * This library is distributed in the hope that it will be useful,</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="file-gdkevents-quartz-c-LC13" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * but WITHOUT ANY WARRANTY; without even the implied warranty of</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="file-gdkevents-quartz-c-LC14" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="file-gdkevents-quartz-c-LC15" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Lesser General Public License for more details.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="file-gdkevents-quartz-c-LC16" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="file-gdkevents-quartz-c-LC17" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * You should have received a copy of the GNU Lesser General Public</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="file-gdkevents-quartz-c-LC18" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * License along with this library. If not, see &lt;http://www.gnu.org/licenses/&gt;.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="file-gdkevents-quartz-c-LC19" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="file-gdkevents-quartz-c-LC20" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="file-gdkevents-quartz-c-LC21" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>config.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L22" class="blob-num js-line-number" data-line-number="22"></td>
        <td id="file-gdkevents-quartz-c-LC22" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>sys/types.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L23" class="blob-num js-line-number" data-line-number="23"></td>
        <td id="file-gdkevents-quartz-c-LC23" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>sys/sysctl.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L24" class="blob-num js-line-number" data-line-number="24"></td>
        <td id="file-gdkevents-quartz-c-LC24" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>pthread.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L25" class="blob-num js-line-number" data-line-number="25"></td>
        <td id="file-gdkevents-quartz-c-LC25" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>unistd.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L26" class="blob-num js-line-number" data-line-number="26"></td>
        <td id="file-gdkevents-quartz-c-LC26" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L27" class="blob-num js-line-number" data-line-number="27"></td>
        <td id="file-gdkevents-quartz-c-LC27" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">import</span> <span class="pl-s"><span class="pl-pds">&lt;</span>Cocoa/Cocoa.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L28" class="blob-num js-line-number" data-line-number="28"></td>
        <td id="file-gdkevents-quartz-c-LC28" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>Carbon/Carbon.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L29" class="blob-num js-line-number" data-line-number="29"></td>
        <td id="file-gdkevents-quartz-c-LC29" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L30" class="blob-num js-line-number" data-line-number="30"></td>
        <td id="file-gdkevents-quartz-c-LC30" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>gdk/gdkdisplayprivate.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L31" class="blob-num js-line-number" data-line-number="31"></td>
        <td id="file-gdkevents-quartz-c-LC31" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L32" class="blob-num js-line-number" data-line-number="32"></td>
        <td id="file-gdkevents-quartz-c-LC32" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>gdkscreen.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L33" class="blob-num js-line-number" data-line-number="33"></td>
        <td id="file-gdkevents-quartz-c-LC33" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>gdkkeysyms.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L34" class="blob-num js-line-number" data-line-number="34"></td>
        <td id="file-gdkevents-quartz-c-LC34" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>gdkquartz.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L35" class="blob-num js-line-number" data-line-number="35"></td>
        <td id="file-gdkevents-quartz-c-LC35" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>gdkquartzdisplay.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L36" class="blob-num js-line-number" data-line-number="36"></td>
        <td id="file-gdkevents-quartz-c-LC36" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>gdkprivate-quartz.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L37" class="blob-num js-line-number" data-line-number="37"></td>
        <td id="file-gdkevents-quartz-c-LC37" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>gdkquartzdevicemanager-core.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L38" class="blob-num js-line-number" data-line-number="38"></td>
        <td id="file-gdkevents-quartz-c-LC38" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L39" class="blob-num js-line-number" data-line-number="39"></td>
        <td id="file-gdkevents-quartz-c-LC39" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">GRIP_WIDTH</span> <span class="pl-c1">15</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L40" class="blob-num js-line-number" data-line-number="40"></td>
        <td id="file-gdkevents-quartz-c-LC40" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">GRIP_HEIGHT</span> <span class="pl-c1">15</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L41" class="blob-num js-line-number" data-line-number="41"></td>
        <td id="file-gdkevents-quartz-c-LC41" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">GDK_LION_RESIZE</span> <span class="pl-c1">5</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L42" class="blob-num js-line-number" data-line-number="42"></td>
        <td id="file-gdkevents-quartz-c-LC42" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L43" class="blob-num js-line-number" data-line-number="43"></td>
        <td id="file-gdkevents-quartz-c-LC43" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">WINDOW_IS_TOPLEVEL</span>(<span class="pl-v">window</span>)		     \</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L44" class="blob-num js-line-number" data-line-number="44"></td>
        <td id="file-gdkevents-quartz-c-LC44" class="blob-code blob-code-inner js-file-line">  (GDK_WINDOW_TYPE (window) != GDK_WINDOW_CHILD &amp;&amp;   \</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L45" class="blob-num js-line-number" data-line-number="45"></td>
        <td id="file-gdkevents-quartz-c-LC45" class="blob-code blob-code-inner js-file-line">   <span class="pl-en">GDK_WINDOW_TYPE</span> (window) != GDK_WINDOW_FOREIGN &amp;&amp; \</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L46" class="blob-num js-line-number" data-line-number="46"></td>
        <td id="file-gdkevents-quartz-c-LC46" class="blob-code blob-code-inner js-file-line">   GDK_WINDOW_TYPE (window) != GDK_WINDOW_OFFSCREEN)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L47" class="blob-num js-line-number" data-line-number="47"></td>
        <td id="file-gdkevents-quartz-c-LC47" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L48" class="blob-num js-line-number" data-line-number="48"></td>
        <td id="file-gdkevents-quartz-c-LC48" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> This is the window corresponding to the key window <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L49" class="blob-num js-line-number" data-line-number="49"></td>
        <td id="file-gdkevents-quartz-c-LC49" class="blob-code blob-code-inner js-file-line">static GdkWindow   *current_keyboard_window;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L50" class="blob-num js-line-number" data-line-number="50"></td>
        <td id="file-gdkevents-quartz-c-LC50" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L51" class="blob-num js-line-number" data-line-number="51"></td>
        <td id="file-gdkevents-quartz-c-LC51" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L52" class="blob-num js-line-number" data-line-number="52"></td>
        <td id="file-gdkevents-quartz-c-LC52" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">append_event</span>                        (GdkEvent  *event,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L53" class="blob-num js-line-number" data-line-number="53"></td>
        <td id="file-gdkevents-quartz-c-LC53" class="blob-code blob-code-inner js-file-line">                                                 gboolean   windowing);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L54" class="blob-num js-line-number" data-line-number="54"></td>
        <td id="file-gdkevents-quartz-c-LC54" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L55" class="blob-num js-line-number" data-line-number="55"></td>
        <td id="file-gdkevents-quartz-c-LC55" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> GdkWindow *<span class="pl-en">find_toplevel_under_pointer</span>   (GdkDisplay *display,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L56" class="blob-num js-line-number" data-line-number="56"></td>
        <td id="file-gdkevents-quartz-c-LC56" class="blob-code blob-code-inner js-file-line">                                                 NSPoint     screen_point,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L57" class="blob-num js-line-number" data-line-number="57"></td>
        <td id="file-gdkevents-quartz-c-LC57" class="blob-code blob-code-inner js-file-line">                                                 gint       *x,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L58" class="blob-num js-line-number" data-line-number="58"></td>
        <td id="file-gdkevents-quartz-c-LC58" class="blob-code blob-code-inner js-file-line">                                                 gint       *y);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L59" class="blob-num js-line-number" data-line-number="59"></td>
        <td id="file-gdkevents-quartz-c-LC59" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L60" class="blob-num js-line-number" data-line-number="60"></td>
        <td id="file-gdkevents-quartz-c-LC60" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L61" class="blob-num js-line-number" data-line-number="61"></td>
        <td id="file-gdkevents-quartz-c-LC61" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L62" class="blob-num js-line-number" data-line-number="62"></td>
        <td id="file-gdkevents-quartz-c-LC62" class="blob-code blob-code-inner js-file-line"><span class="pl-en">gdk_quartz_ns_notification_callback</span> (<span class="pl-c1">CFNotificationCenterRef</span>  center,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L63" class="blob-num js-line-number" data-line-number="63"></td>
        <td id="file-gdkevents-quartz-c-LC63" class="blob-code blob-code-inner js-file-line">                                     <span class="pl-k">void</span>                    *observer,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L64" class="blob-num js-line-number" data-line-number="64"></td>
        <td id="file-gdkevents-quartz-c-LC64" class="blob-code blob-code-inner js-file-line">                                     <span class="pl-c1">CFStringRef</span>              name,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L65" class="blob-num js-line-number" data-line-number="65"></td>
        <td id="file-gdkevents-quartz-c-LC65" class="blob-code blob-code-inner js-file-line">                                     <span class="pl-k">const</span> <span class="pl-k">void</span>              *object,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L66" class="blob-num js-line-number" data-line-number="66"></td>
        <td id="file-gdkevents-quartz-c-LC66" class="blob-code blob-code-inner js-file-line">                                     <span class="pl-c1">CFDictionaryRef</span>          userInfo)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L67" class="blob-num js-line-number" data-line-number="67"></td>
        <td id="file-gdkevents-quartz-c-LC67" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L68" class="blob-num js-line-number" data-line-number="68"></td>
        <td id="file-gdkevents-quartz-c-LC68" class="blob-code blob-code-inner js-file-line">  GdkEvent new_event;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L69" class="blob-num js-line-number" data-line-number="69"></td>
        <td id="file-gdkevents-quartz-c-LC69" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L70" class="blob-num js-line-number" data-line-number="70"></td>
        <td id="file-gdkevents-quartz-c-LC70" class="blob-code blob-code-inner js-file-line">  new_event.<span class="pl-smi">type</span> = GDK_SETTING;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L71" class="blob-num js-line-number" data-line-number="71"></td>
        <td id="file-gdkevents-quartz-c-LC71" class="blob-code blob-code-inner js-file-line">  new_event.<span class="pl-smi">setting</span>.<span class="pl-smi">window</span> = <span class="pl-c1">gdk_screen_get_root_window</span> (_gdk_screen);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L72" class="blob-num js-line-number" data-line-number="72"></td>
        <td id="file-gdkevents-quartz-c-LC72" class="blob-code blob-code-inner js-file-line">  new_event.<span class="pl-smi">setting</span>.<span class="pl-smi">send_event</span> = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L73" class="blob-num js-line-number" data-line-number="73"></td>
        <td id="file-gdkevents-quartz-c-LC73" class="blob-code blob-code-inner js-file-line">  new_event.<span class="pl-smi">setting</span>.<span class="pl-smi">action</span> = GDK_SETTING_ACTION_CHANGED;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L74" class="blob-num js-line-number" data-line-number="74"></td>
        <td id="file-gdkevents-quartz-c-LC74" class="blob-code blob-code-inner js-file-line">  new_event.<span class="pl-smi">setting</span>.<span class="pl-smi">name</span> = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L75" class="blob-num js-line-number" data-line-number="75"></td>
        <td id="file-gdkevents-quartz-c-LC75" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L76" class="blob-num js-line-number" data-line-number="76"></td>
        <td id="file-gdkevents-quartz-c-LC76" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> Translate name <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L77" class="blob-num js-line-number" data-line-number="77"></td>
        <td id="file-gdkevents-quartz-c-LC77" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (<span class="pl-c1">CFStringCompare</span> (name,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L78" class="blob-num js-line-number" data-line-number="78"></td>
        <td id="file-gdkevents-quartz-c-LC78" class="blob-code blob-code-inner js-file-line">                       <span class="pl-c1">CFSTR</span>(<span class="pl-s"><span class="pl-pds">&quot;</span>AppleNoRedisplayAppearancePreferenceChanged<span class="pl-pds">&quot;</span></span>),</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L79" class="blob-num js-line-number" data-line-number="79"></td>
        <td id="file-gdkevents-quartz-c-LC79" class="blob-code blob-code-inner js-file-line">                       <span class="pl-c1">0</span>) == <span class="pl-c1">kCFCompareEqualTo</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L80" class="blob-num js-line-number" data-line-number="80"></td>
        <td id="file-gdkevents-quartz-c-LC80" class="blob-code blob-code-inner js-file-line">    new_event.<span class="pl-smi">setting</span>.<span class="pl-smi">name</span> = <span class="pl-s"><span class="pl-pds">&quot;</span>gtk-primary-button-warps-slider<span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L81" class="blob-num js-line-number" data-line-number="81"></td>
        <td id="file-gdkevents-quartz-c-LC81" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L82" class="blob-num js-line-number" data-line-number="82"></td>
        <td id="file-gdkevents-quartz-c-LC82" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (!new_event.<span class="pl-smi">setting</span>.<span class="pl-smi">name</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L83" class="blob-num js-line-number" data-line-number="83"></td>
        <td id="file-gdkevents-quartz-c-LC83" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L84" class="blob-num js-line-number" data-line-number="84"></td>
        <td id="file-gdkevents-quartz-c-LC84" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L85" class="blob-num js-line-number" data-line-number="85"></td>
        <td id="file-gdkevents-quartz-c-LC85" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">gdk_event_put</span> (&amp;new_event);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L86" class="blob-num js-line-number" data-line-number="86"></td>
        <td id="file-gdkevents-quartz-c-LC86" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L87" class="blob-num js-line-number" data-line-number="87"></td>
        <td id="file-gdkevents-quartz-c-LC87" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L88" class="blob-num js-line-number" data-line-number="88"></td>
        <td id="file-gdkevents-quartz-c-LC88" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L89" class="blob-num js-line-number" data-line-number="89"></td>
        <td id="file-gdkevents-quartz-c-LC89" class="blob-code blob-code-inner js-file-line"><span class="pl-en">gdk_quartz_events_init_notifications</span> (<span class="pl-k">void</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L90" class="blob-num js-line-number" data-line-number="90"></td>
        <td id="file-gdkevents-quartz-c-LC90" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L91" class="blob-num js-line-number" data-line-number="91"></td>
        <td id="file-gdkevents-quartz-c-LC91" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">static</span> gboolean notifications_initialized = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L92" class="blob-num js-line-number" data-line-number="92"></td>
        <td id="file-gdkevents-quartz-c-LC92" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L93" class="blob-num js-line-number" data-line-number="93"></td>
        <td id="file-gdkevents-quartz-c-LC93" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (notifications_initialized)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L94" class="blob-num js-line-number" data-line-number="94"></td>
        <td id="file-gdkevents-quartz-c-LC94" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L95" class="blob-num js-line-number" data-line-number="95"></td>
        <td id="file-gdkevents-quartz-c-LC95" class="blob-code blob-code-inner js-file-line">  notifications_initialized = <span class="pl-c1">TRUE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L96" class="blob-num js-line-number" data-line-number="96"></td>
        <td id="file-gdkevents-quartz-c-LC96" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L97" class="blob-num js-line-number" data-line-number="97"></td>
        <td id="file-gdkevents-quartz-c-LC97" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> Initialize any handlers for notifications we want to push to GTK</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L98" class="blob-num js-line-number" data-line-number="98"></td>
        <td id="file-gdkevents-quartz-c-LC98" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * through GdkEventSettings.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L99" class="blob-num js-line-number" data-line-number="99"></td>
        <td id="file-gdkevents-quartz-c-LC99" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L100" class="blob-num js-line-number" data-line-number="100"></td>
        <td id="file-gdkevents-quartz-c-LC100" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L101" class="blob-num js-line-number" data-line-number="101"></td>
        <td id="file-gdkevents-quartz-c-LC101" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> This is an undocumented *distributed* notification to listen for changes</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L102" class="blob-num js-line-number" data-line-number="102"></td>
        <td id="file-gdkevents-quartz-c-LC102" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * in scrollbar jump behavior. It is used by LibreOffice and WebKit as well.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L103" class="blob-num js-line-number" data-line-number="103"></td>
        <td id="file-gdkevents-quartz-c-LC103" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L104" class="blob-num js-line-number" data-line-number="104"></td>
        <td id="file-gdkevents-quartz-c-LC104" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">CFNotificationCenterAddObserver</span> (<span class="pl-c1">CFNotificationCenterGetDistributedCenter</span> (),</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L105" class="blob-num js-line-number" data-line-number="105"></td>
        <td id="file-gdkevents-quartz-c-LC105" class="blob-code blob-code-inner js-file-line">                                   <span class="pl-c1">NULL</span>,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L106" class="blob-num js-line-number" data-line-number="106"></td>
        <td id="file-gdkevents-quartz-c-LC106" class="blob-code blob-code-inner js-file-line">                                   &amp;gdk_quartz_ns_notification_callback,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L107" class="blob-num js-line-number" data-line-number="107"></td>
        <td id="file-gdkevents-quartz-c-LC107" class="blob-code blob-code-inner js-file-line">                                   <span class="pl-c1">CFSTR</span> (<span class="pl-s"><span class="pl-pds">&quot;</span>AppleNoRedisplayAppearancePreferenceChanged<span class="pl-pds">&quot;</span></span>),</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L108" class="blob-num js-line-number" data-line-number="108"></td>
        <td id="file-gdkevents-quartz-c-LC108" class="blob-code blob-code-inner js-file-line">                                   <span class="pl-c1">NULL</span>,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L109" class="blob-num js-line-number" data-line-number="109"></td>
        <td id="file-gdkevents-quartz-c-LC109" class="blob-code blob-code-inner js-file-line">                                   <span class="pl-c1">CFNotificationSuspensionBehaviorDeliverImmediately</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L110" class="blob-num js-line-number" data-line-number="110"></td>
        <td id="file-gdkevents-quartz-c-LC110" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L111" class="blob-num js-line-number" data-line-number="111"></td>
        <td id="file-gdkevents-quartz-c-LC111" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L112" class="blob-num js-line-number" data-line-number="112"></td>
        <td id="file-gdkevents-quartz-c-LC112" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L113" class="blob-num js-line-number" data-line-number="113"></td>
        <td id="file-gdkevents-quartz-c-LC113" class="blob-code blob-code-inner js-file-line"><span class="pl-en">_gdk_quartz_events_init</span> (<span class="pl-k">void</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L114" class="blob-num js-line-number" data-line-number="114"></td>
        <td id="file-gdkevents-quartz-c-LC114" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L115" class="blob-num js-line-number" data-line-number="115"></td>
        <td id="file-gdkevents-quartz-c-LC115" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">_gdk_quartz_event_loop_init</span> ();</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L116" class="blob-num js-line-number" data-line-number="116"></td>
        <td id="file-gdkevents-quartz-c-LC116" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">gdk_quartz_events_init_notifications</span> ();</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L117" class="blob-num js-line-number" data-line-number="117"></td>
        <td id="file-gdkevents-quartz-c-LC117" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L118" class="blob-num js-line-number" data-line-number="118"></td>
        <td id="file-gdkevents-quartz-c-LC118" class="blob-code blob-code-inner js-file-line">  current_keyboard_window = <span class="pl-c1">g_object_ref</span> (_gdk_root);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L119" class="blob-num js-line-number" data-line-number="119"></td>
        <td id="file-gdkevents-quartz-c-LC119" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L120" class="blob-num js-line-number" data-line-number="120"></td>
        <td id="file-gdkevents-quartz-c-LC120" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L121" class="blob-num js-line-number" data-line-number="121"></td>
        <td id="file-gdkevents-quartz-c-LC121" class="blob-code blob-code-inner js-file-line">gboolean</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L122" class="blob-num js-line-number" data-line-number="122"></td>
        <td id="file-gdkevents-quartz-c-LC122" class="blob-code blob-code-inner js-file-line"><span class="pl-en">_gdk_quartz_display_has_pending</span> (GdkDisplay *display)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L123" class="blob-num js-line-number" data-line-number="123"></td>
        <td id="file-gdkevents-quartz-c-LC123" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L124" class="blob-num js-line-number" data-line-number="124"></td>
        <td id="file-gdkevents-quartz-c-LC124" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> (<span class="pl-c1">_gdk_event_queue_find_first</span> (display) ||</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L125" class="blob-num js-line-number" data-line-number="125"></td>
        <td id="file-gdkevents-quartz-c-LC125" class="blob-code blob-code-inner js-file-line">         (<span class="pl-c1">_gdk_quartz_event_loop_check_pending</span> ()));</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L126" class="blob-num js-line-number" data-line-number="126"></td>
        <td id="file-gdkevents-quartz-c-LC126" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L127" class="blob-num js-line-number" data-line-number="127"></td>
        <td id="file-gdkevents-quartz-c-LC127" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L128" class="blob-num js-line-number" data-line-number="128"></td>
        <td id="file-gdkevents-quartz-c-LC128" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L129" class="blob-num js-line-number" data-line-number="129"></td>
        <td id="file-gdkevents-quartz-c-LC129" class="blob-code blob-code-inner js-file-line"><span class="pl-en">_gdk_quartz_events_break_all_grabs</span> (guint32 time)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L130" class="blob-num js-line-number" data-line-number="130"></td>
        <td id="file-gdkevents-quartz-c-LC130" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L131" class="blob-num js-line-number" data-line-number="131"></td>
        <td id="file-gdkevents-quartz-c-LC131" class="blob-code blob-code-inner js-file-line">  GList *list, *l;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L132" class="blob-num js-line-number" data-line-number="132"></td>
        <td id="file-gdkevents-quartz-c-LC132" class="blob-code blob-code-inner js-file-line">  GdkDeviceManager *device_manager;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L133" class="blob-num js-line-number" data-line-number="133"></td>
        <td id="file-gdkevents-quartz-c-LC133" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L134" class="blob-num js-line-number" data-line-number="134"></td>
        <td id="file-gdkevents-quartz-c-LC134" class="blob-code blob-code-inner js-file-line">  device_manager = <span class="pl-c1">gdk_display_get_device_manager</span> (_gdk_display);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L135" class="blob-num js-line-number" data-line-number="135"></td>
        <td id="file-gdkevents-quartz-c-LC135" class="blob-code blob-code-inner js-file-line">  list = <span class="pl-c1">gdk_device_manager_list_devices</span> (device_manager,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L136" class="blob-num js-line-number" data-line-number="136"></td>
        <td id="file-gdkevents-quartz-c-LC136" class="blob-code blob-code-inner js-file-line">                                          GDK_DEVICE_TYPE_MASTER);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L137" class="blob-num js-line-number" data-line-number="137"></td>
        <td id="file-gdkevents-quartz-c-LC137" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">for</span> (l = list; l; l = l-&gt;<span class="pl-smi">next</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L138" class="blob-num js-line-number" data-line-number="138"></td>
        <td id="file-gdkevents-quartz-c-LC138" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L139" class="blob-num js-line-number" data-line-number="139"></td>
        <td id="file-gdkevents-quartz-c-LC139" class="blob-code blob-code-inner js-file-line">      GdkDeviceGrabInfo *grab;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L140" class="blob-num js-line-number" data-line-number="140"></td>
        <td id="file-gdkevents-quartz-c-LC140" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L141" class="blob-num js-line-number" data-line-number="141"></td>
        <td id="file-gdkevents-quartz-c-LC141" class="blob-code blob-code-inner js-file-line">      grab = <span class="pl-c1">_gdk_display_get_last_device_grab</span> (_gdk_display, l-&gt;<span class="pl-smi">data</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L142" class="blob-num js-line-number" data-line-number="142"></td>
        <td id="file-gdkevents-quartz-c-LC142" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (grab)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L143" class="blob-num js-line-number" data-line-number="143"></td>
        <td id="file-gdkevents-quartz-c-LC143" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L144" class="blob-num js-line-number" data-line-number="144"></td>
        <td id="file-gdkevents-quartz-c-LC144" class="blob-code blob-code-inner js-file-line">          grab-&gt;<span class="pl-smi">serial_end</span> = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L145" class="blob-num js-line-number" data-line-number="145"></td>
        <td id="file-gdkevents-quartz-c-LC145" class="blob-code blob-code-inner js-file-line">          grab-&gt;<span class="pl-smi">implicit_ungrab</span> = <span class="pl-c1">TRUE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L146" class="blob-num js-line-number" data-line-number="146"></td>
        <td id="file-gdkevents-quartz-c-LC146" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L147" class="blob-num js-line-number" data-line-number="147"></td>
        <td id="file-gdkevents-quartz-c-LC147" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L148" class="blob-num js-line-number" data-line-number="148"></td>
        <td id="file-gdkevents-quartz-c-LC148" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">_gdk_display_device_grab_update</span> (_gdk_display, l-&gt;<span class="pl-smi">data</span>, <span class="pl-c1">NULL</span>, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L149" class="blob-num js-line-number" data-line-number="149"></td>
        <td id="file-gdkevents-quartz-c-LC149" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L150" class="blob-num js-line-number" data-line-number="150"></td>
        <td id="file-gdkevents-quartz-c-LC150" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L151" class="blob-num js-line-number" data-line-number="151"></td>
        <td id="file-gdkevents-quartz-c-LC151" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">g_list_free</span> (list);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L152" class="blob-num js-line-number" data-line-number="152"></td>
        <td id="file-gdkevents-quartz-c-LC152" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L153" class="blob-num js-line-number" data-line-number="153"></td>
        <td id="file-gdkevents-quartz-c-LC153" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L154" class="blob-num js-line-number" data-line-number="154"></td>
        <td id="file-gdkevents-quartz-c-LC154" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L155" class="blob-num js-line-number" data-line-number="155"></td>
        <td id="file-gdkevents-quartz-c-LC155" class="blob-code blob-code-inner js-file-line"><span class="pl-en">fixup_event</span> (GdkEvent *event)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L156" class="blob-num js-line-number" data-line-number="156"></td>
        <td id="file-gdkevents-quartz-c-LC156" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L157" class="blob-num js-line-number" data-line-number="157"></td>
        <td id="file-gdkevents-quartz-c-LC157" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">window</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L158" class="blob-num js-line-number" data-line-number="158"></td>
        <td id="file-gdkevents-quartz-c-LC158" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">g_object_ref</span> (event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">window</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L159" class="blob-num js-line-number" data-line-number="159"></td>
        <td id="file-gdkevents-quartz-c-LC159" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (((event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">type</span> == GDK_ENTER_NOTIFY) ||</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L160" class="blob-num js-line-number" data-line-number="160"></td>
        <td id="file-gdkevents-quartz-c-LC160" class="blob-code blob-code-inner js-file-line">       (event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">type</span> == GDK_LEAVE_NOTIFY)) &amp;&amp;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L161" class="blob-num js-line-number" data-line-number="161"></td>
        <td id="file-gdkevents-quartz-c-LC161" class="blob-code blob-code-inner js-file-line">      (event-&gt;<span class="pl-smi">crossing</span>.<span class="pl-smi">subwindow</span> != <span class="pl-c1">NULL</span>))</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L162" class="blob-num js-line-number" data-line-number="162"></td>
        <td id="file-gdkevents-quartz-c-LC162" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">g_object_ref</span> (event-&gt;<span class="pl-smi">crossing</span>.<span class="pl-smi">subwindow</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L163" class="blob-num js-line-number" data-line-number="163"></td>
        <td id="file-gdkevents-quartz-c-LC163" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">send_event</span> = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L164" class="blob-num js-line-number" data-line-number="164"></td>
        <td id="file-gdkevents-quartz-c-LC164" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L165" class="blob-num js-line-number" data-line-number="165"></td>
        <td id="file-gdkevents-quartz-c-LC165" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L166" class="blob-num js-line-number" data-line-number="166"></td>
        <td id="file-gdkevents-quartz-c-LC166" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L167" class="blob-num js-line-number" data-line-number="167"></td>
        <td id="file-gdkevents-quartz-c-LC167" class="blob-code blob-code-inner js-file-line"><span class="pl-en">append_event</span> (GdkEvent *event,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L168" class="blob-num js-line-number" data-line-number="168"></td>
        <td id="file-gdkevents-quartz-c-LC168" class="blob-code blob-code-inner js-file-line">              gboolean  windowing)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L169" class="blob-num js-line-number" data-line-number="169"></td>
        <td id="file-gdkevents-quartz-c-LC169" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L170" class="blob-num js-line-number" data-line-number="170"></td>
        <td id="file-gdkevents-quartz-c-LC170" class="blob-code blob-code-inner js-file-line">  GList *node;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L171" class="blob-num js-line-number" data-line-number="171"></td>
        <td id="file-gdkevents-quartz-c-LC171" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L172" class="blob-num js-line-number" data-line-number="172"></td>
        <td id="file-gdkevents-quartz-c-LC172" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">fixup_event</span> (event);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L173" class="blob-num js-line-number" data-line-number="173"></td>
        <td id="file-gdkevents-quartz-c-LC173" class="blob-code blob-code-inner js-file-line">  node = <span class="pl-c1">_gdk_event_queue_append</span> (_gdk_display, event);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L174" class="blob-num js-line-number" data-line-number="174"></td>
        <td id="file-gdkevents-quartz-c-LC174" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L175" class="blob-num js-line-number" data-line-number="175"></td>
        <td id="file-gdkevents-quartz-c-LC175" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (windowing)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L176" class="blob-num js-line-number" data-line-number="176"></td>
        <td id="file-gdkevents-quartz-c-LC176" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">_gdk_windowing_got_event</span> (_gdk_display, node, event, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L177" class="blob-num js-line-number" data-line-number="177"></td>
        <td id="file-gdkevents-quartz-c-LC177" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L178" class="blob-num js-line-number" data-line-number="178"></td>
        <td id="file-gdkevents-quartz-c-LC178" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L179" class="blob-num js-line-number" data-line-number="179"></td>
        <td id="file-gdkevents-quartz-c-LC179" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> gint</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L180" class="blob-num js-line-number" data-line-number="180"></td>
        <td id="file-gdkevents-quartz-c-LC180" class="blob-code blob-code-inner js-file-line"><span class="pl-en">gdk_event_apply_filters</span> (NSEvent *nsevent,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L181" class="blob-num js-line-number" data-line-number="181"></td>
        <td id="file-gdkevents-quartz-c-LC181" class="blob-code blob-code-inner js-file-line">			 GdkEvent *event,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L182" class="blob-num js-line-number" data-line-number="182"></td>
        <td id="file-gdkevents-quartz-c-LC182" class="blob-code blob-code-inner js-file-line">			 GList **filters)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L183" class="blob-num js-line-number" data-line-number="183"></td>
        <td id="file-gdkevents-quartz-c-LC183" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L184" class="blob-num js-line-number" data-line-number="184"></td>
        <td id="file-gdkevents-quartz-c-LC184" class="blob-code blob-code-inner js-file-line">  GList *tmp_list;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L185" class="blob-num js-line-number" data-line-number="185"></td>
        <td id="file-gdkevents-quartz-c-LC185" class="blob-code blob-code-inner js-file-line">  GdkFilterReturn result;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L186" class="blob-num js-line-number" data-line-number="186"></td>
        <td id="file-gdkevents-quartz-c-LC186" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L187" class="blob-num js-line-number" data-line-number="187"></td>
        <td id="file-gdkevents-quartz-c-LC187" class="blob-code blob-code-inner js-file-line">  tmp_list = *filters;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L188" class="blob-num js-line-number" data-line-number="188"></td>
        <td id="file-gdkevents-quartz-c-LC188" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L189" class="blob-num js-line-number" data-line-number="189"></td>
        <td id="file-gdkevents-quartz-c-LC189" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">while</span> (tmp_list)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L190" class="blob-num js-line-number" data-line-number="190"></td>
        <td id="file-gdkevents-quartz-c-LC190" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L191" class="blob-num js-line-number" data-line-number="191"></td>
        <td id="file-gdkevents-quartz-c-LC191" class="blob-code blob-code-inner js-file-line">      GdkEventFilter *filter = (GdkEventFilter*) tmp_list-&gt;<span class="pl-smi">data</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L192" class="blob-num js-line-number" data-line-number="192"></td>
        <td id="file-gdkevents-quartz-c-LC192" class="blob-code blob-code-inner js-file-line">      GList *node;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L193" class="blob-num js-line-number" data-line-number="193"></td>
        <td id="file-gdkevents-quartz-c-LC193" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L194" class="blob-num js-line-number" data-line-number="194"></td>
        <td id="file-gdkevents-quartz-c-LC194" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> ((filter-&gt;<span class="pl-smi">flags</span> &amp; GDK_EVENT_FILTER_REMOVED) != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L195" class="blob-num js-line-number" data-line-number="195"></td>
        <td id="file-gdkevents-quartz-c-LC195" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L196" class="blob-num js-line-number" data-line-number="196"></td>
        <td id="file-gdkevents-quartz-c-LC196" class="blob-code blob-code-inner js-file-line">          tmp_list = tmp_list-&gt;<span class="pl-smi">next</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L197" class="blob-num js-line-number" data-line-number="197"></td>
        <td id="file-gdkevents-quartz-c-LC197" class="blob-code blob-code-inner js-file-line">          <span class="pl-k">continue</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L198" class="blob-num js-line-number" data-line-number="198"></td>
        <td id="file-gdkevents-quartz-c-LC198" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L199" class="blob-num js-line-number" data-line-number="199"></td>
        <td id="file-gdkevents-quartz-c-LC199" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L200" class="blob-num js-line-number" data-line-number="200"></td>
        <td id="file-gdkevents-quartz-c-LC200" class="blob-code blob-code-inner js-file-line">      filter-&gt;<span class="pl-smi">ref_count</span>++;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L201" class="blob-num js-line-number" data-line-number="201"></td>
        <td id="file-gdkevents-quartz-c-LC201" class="blob-code blob-code-inner js-file-line">      result = filter-&gt;<span class="pl-c1">function</span> (nsevent, event, filter-&gt;<span class="pl-smi">data</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L202" class="blob-num js-line-number" data-line-number="202"></td>
        <td id="file-gdkevents-quartz-c-LC202" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L203" class="blob-num js-line-number" data-line-number="203"></td>
        <td id="file-gdkevents-quartz-c-LC203" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> get the next node after running the function since the</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L204" class="blob-num js-line-number" data-line-number="204"></td>
        <td id="file-gdkevents-quartz-c-LC204" class="blob-code blob-code-inner js-file-line"><span class="pl-c">         function may add or remove a next node <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L205" class="blob-num js-line-number" data-line-number="205"></td>
        <td id="file-gdkevents-quartz-c-LC205" class="blob-code blob-code-inner js-file-line">      node = tmp_list;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L206" class="blob-num js-line-number" data-line-number="206"></td>
        <td id="file-gdkevents-quartz-c-LC206" class="blob-code blob-code-inner js-file-line">      tmp_list = tmp_list-&gt;<span class="pl-smi">next</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L207" class="blob-num js-line-number" data-line-number="207"></td>
        <td id="file-gdkevents-quartz-c-LC207" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L208" class="blob-num js-line-number" data-line-number="208"></td>
        <td id="file-gdkevents-quartz-c-LC208" class="blob-code blob-code-inner js-file-line">      filter-&gt;<span class="pl-smi">ref_count</span>--;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L209" class="blob-num js-line-number" data-line-number="209"></td>
        <td id="file-gdkevents-quartz-c-LC209" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (filter-&gt;<span class="pl-smi">ref_count</span> == <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L210" class="blob-num js-line-number" data-line-number="210"></td>
        <td id="file-gdkevents-quartz-c-LC210" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L211" class="blob-num js-line-number" data-line-number="211"></td>
        <td id="file-gdkevents-quartz-c-LC211" class="blob-code blob-code-inner js-file-line">          *filters = <span class="pl-c1">g_list_remove_link</span> (*filters, node);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L212" class="blob-num js-line-number" data-line-number="212"></td>
        <td id="file-gdkevents-quartz-c-LC212" class="blob-code blob-code-inner js-file-line">          <span class="pl-c1">g_list_free_1</span> (node);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L213" class="blob-num js-line-number" data-line-number="213"></td>
        <td id="file-gdkevents-quartz-c-LC213" class="blob-code blob-code-inner js-file-line">          <span class="pl-c1">g_free</span> (filter);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L214" class="blob-num js-line-number" data-line-number="214"></td>
        <td id="file-gdkevents-quartz-c-LC214" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L215" class="blob-num js-line-number" data-line-number="215"></td>
        <td id="file-gdkevents-quartz-c-LC215" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L216" class="blob-num js-line-number" data-line-number="216"></td>
        <td id="file-gdkevents-quartz-c-LC216" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (result !=  GDK_FILTER_CONTINUE)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L217" class="blob-num js-line-number" data-line-number="217"></td>
        <td id="file-gdkevents-quartz-c-LC217" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> result;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L218" class="blob-num js-line-number" data-line-number="218"></td>
        <td id="file-gdkevents-quartz-c-LC218" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L219" class="blob-num js-line-number" data-line-number="219"></td>
        <td id="file-gdkevents-quartz-c-LC219" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L220" class="blob-num js-line-number" data-line-number="220"></td>
        <td id="file-gdkevents-quartz-c-LC220" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> GDK_FILTER_CONTINUE;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L221" class="blob-num js-line-number" data-line-number="221"></td>
        <td id="file-gdkevents-quartz-c-LC221" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L222" class="blob-num js-line-number" data-line-number="222"></td>
        <td id="file-gdkevents-quartz-c-LC222" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L223" class="blob-num js-line-number" data-line-number="223"></td>
        <td id="file-gdkevents-quartz-c-LC223" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> guint32</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L224" class="blob-num js-line-number" data-line-number="224"></td>
        <td id="file-gdkevents-quartz-c-LC224" class="blob-code blob-code-inner js-file-line"><span class="pl-en">get_time_from_ns_event</span> (NSEvent *event)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L225" class="blob-num js-line-number" data-line-number="225"></td>
        <td id="file-gdkevents-quartz-c-LC225" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L226" class="blob-num js-line-number" data-line-number="226"></td>
        <td id="file-gdkevents-quartz-c-LC226" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">double</span> <span class="pl-c1">time</span> = [event timestamp];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L227" class="blob-num js-line-number" data-line-number="227"></td>
        <td id="file-gdkevents-quartz-c-LC227" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L228" class="blob-num js-line-number" data-line-number="228"></td>
        <td id="file-gdkevents-quartz-c-LC228" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> cast via double-&gt;uint64 conversion to make sure that it is</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L229" class="blob-num js-line-number" data-line-number="229"></td>
        <td id="file-gdkevents-quartz-c-LC229" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * wrapped on 32-bit machines when it overflows</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L230" class="blob-num js-line-number" data-line-number="230"></td>
        <td id="file-gdkevents-quartz-c-LC230" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L231" class="blob-num js-line-number" data-line-number="231"></td>
        <td id="file-gdkevents-quartz-c-LC231" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> (guint32) (guint64) (<span class="pl-c1">time</span> * <span class="pl-c1">1000.0</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L232" class="blob-num js-line-number" data-line-number="232"></td>
        <td id="file-gdkevents-quartz-c-LC232" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L233" class="blob-num js-line-number" data-line-number="233"></td>
        <td id="file-gdkevents-quartz-c-LC233" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L234" class="blob-num js-line-number" data-line-number="234"></td>
        <td id="file-gdkevents-quartz-c-LC234" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">int</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L235" class="blob-num js-line-number" data-line-number="235"></td>
        <td id="file-gdkevents-quartz-c-LC235" class="blob-code blob-code-inner js-file-line"><span class="pl-en">get_mouse_button_from_ns_event</span> (NSEvent *event)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L236" class="blob-num js-line-number" data-line-number="236"></td>
        <td id="file-gdkevents-quartz-c-LC236" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L237" class="blob-num js-line-number" data-line-number="237"></td>
        <td id="file-gdkevents-quartz-c-LC237" class="blob-code blob-code-inner js-file-line">  NSInteger button;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L238" class="blob-num js-line-number" data-line-number="238"></td>
        <td id="file-gdkevents-quartz-c-LC238" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L239" class="blob-num js-line-number" data-line-number="239"></td>
        <td id="file-gdkevents-quartz-c-LC239" class="blob-code blob-code-inner js-file-line">  button = [event buttonNumber];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L240" class="blob-num js-line-number" data-line-number="240"></td>
        <td id="file-gdkevents-quartz-c-LC240" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L241" class="blob-num js-line-number" data-line-number="241"></td>
        <td id="file-gdkevents-quartz-c-LC241" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">switch</span> (button)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L242" class="blob-num js-line-number" data-line-number="242"></td>
        <td id="file-gdkevents-quartz-c-LC242" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L243" class="blob-num js-line-number" data-line-number="243"></td>
        <td id="file-gdkevents-quartz-c-LC243" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> <span class="pl-c1">0</span>:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L244" class="blob-num js-line-number" data-line-number="244"></td>
        <td id="file-gdkevents-quartz-c-LC244" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L245" class="blob-num js-line-number" data-line-number="245"></td>
        <td id="file-gdkevents-quartz-c-LC245" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> <span class="pl-c1">1</span>:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L246" class="blob-num js-line-number" data-line-number="246"></td>
        <td id="file-gdkevents-quartz-c-LC246" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> <span class="pl-c1">3</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L247" class="blob-num js-line-number" data-line-number="247"></td>
        <td id="file-gdkevents-quartz-c-LC247" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> <span class="pl-c1">2</span>:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L248" class="blob-num js-line-number" data-line-number="248"></td>
        <td id="file-gdkevents-quartz-c-LC248" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> <span class="pl-c1">2</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L249" class="blob-num js-line-number" data-line-number="249"></td>
        <td id="file-gdkevents-quartz-c-LC249" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">default</span>:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L250" class="blob-num js-line-number" data-line-number="250"></td>
        <td id="file-gdkevents-quartz-c-LC250" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> button + <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L251" class="blob-num js-line-number" data-line-number="251"></td>
        <td id="file-gdkevents-quartz-c-LC251" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L252" class="blob-num js-line-number" data-line-number="252"></td>
        <td id="file-gdkevents-quartz-c-LC252" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L253" class="blob-num js-line-number" data-line-number="253"></td>
        <td id="file-gdkevents-quartz-c-LC253" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L254" class="blob-num js-line-number" data-line-number="254"></td>
        <td id="file-gdkevents-quartz-c-LC254" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> GdkModifierType</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L255" class="blob-num js-line-number" data-line-number="255"></td>
        <td id="file-gdkevents-quartz-c-LC255" class="blob-code blob-code-inner js-file-line"><span class="pl-en">get_mouse_button_modifiers_from_ns_buttons</span> (NSUInteger nsbuttons)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L256" class="blob-num js-line-number" data-line-number="256"></td>
        <td id="file-gdkevents-quartz-c-LC256" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L257" class="blob-num js-line-number" data-line-number="257"></td>
        <td id="file-gdkevents-quartz-c-LC257" class="blob-code blob-code-inner js-file-line">  GdkModifierType modifiers = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L258" class="blob-num js-line-number" data-line-number="258"></td>
        <td id="file-gdkevents-quartz-c-LC258" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L259" class="blob-num js-line-number" data-line-number="259"></td>
        <td id="file-gdkevents-quartz-c-LC259" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (nsbuttons &amp; (<span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">0</span>))</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L260" class="blob-num js-line-number" data-line-number="260"></td>
        <td id="file-gdkevents-quartz-c-LC260" class="blob-code blob-code-inner js-file-line">    modifiers |= GDK_BUTTON1_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L261" class="blob-num js-line-number" data-line-number="261"></td>
        <td id="file-gdkevents-quartz-c-LC261" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (nsbuttons &amp; (<span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">1</span>))</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L262" class="blob-num js-line-number" data-line-number="262"></td>
        <td id="file-gdkevents-quartz-c-LC262" class="blob-code blob-code-inner js-file-line">    modifiers |= GDK_BUTTON3_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L263" class="blob-num js-line-number" data-line-number="263"></td>
        <td id="file-gdkevents-quartz-c-LC263" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (nsbuttons &amp; (<span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>))</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L264" class="blob-num js-line-number" data-line-number="264"></td>
        <td id="file-gdkevents-quartz-c-LC264" class="blob-code blob-code-inner js-file-line">    modifiers |= GDK_BUTTON2_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L265" class="blob-num js-line-number" data-line-number="265"></td>
        <td id="file-gdkevents-quartz-c-LC265" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (nsbuttons &amp; (<span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">3</span>))</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L266" class="blob-num js-line-number" data-line-number="266"></td>
        <td id="file-gdkevents-quartz-c-LC266" class="blob-code blob-code-inner js-file-line">    modifiers |= GDK_BUTTON4_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L267" class="blob-num js-line-number" data-line-number="267"></td>
        <td id="file-gdkevents-quartz-c-LC267" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (nsbuttons &amp; (<span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">4</span>))</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L268" class="blob-num js-line-number" data-line-number="268"></td>
        <td id="file-gdkevents-quartz-c-LC268" class="blob-code blob-code-inner js-file-line">    modifiers |= GDK_BUTTON5_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L269" class="blob-num js-line-number" data-line-number="269"></td>
        <td id="file-gdkevents-quartz-c-LC269" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L270" class="blob-num js-line-number" data-line-number="270"></td>
        <td id="file-gdkevents-quartz-c-LC270" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> modifiers;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L271" class="blob-num js-line-number" data-line-number="271"></td>
        <td id="file-gdkevents-quartz-c-LC271" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L272" class="blob-num js-line-number" data-line-number="272"></td>
        <td id="file-gdkevents-quartz-c-LC272" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L273" class="blob-num js-line-number" data-line-number="273"></td>
        <td id="file-gdkevents-quartz-c-LC273" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> GdkModifierType</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L274" class="blob-num js-line-number" data-line-number="274"></td>
        <td id="file-gdkevents-quartz-c-LC274" class="blob-code blob-code-inner js-file-line"><span class="pl-en">get_mouse_button_modifiers_from_ns_event</span> (NSEvent *event)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L275" class="blob-num js-line-number" data-line-number="275"></td>
        <td id="file-gdkevents-quartz-c-LC275" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L276" class="blob-num js-line-number" data-line-number="276"></td>
        <td id="file-gdkevents-quartz-c-LC276" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">int</span> button;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L277" class="blob-num js-line-number" data-line-number="277"></td>
        <td id="file-gdkevents-quartz-c-LC277" class="blob-code blob-code-inner js-file-line">  GdkModifierType state = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L278" class="blob-num js-line-number" data-line-number="278"></td>
        <td id="file-gdkevents-quartz-c-LC278" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L279" class="blob-num js-line-number" data-line-number="279"></td>
        <td id="file-gdkevents-quartz-c-LC279" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> This maps buttons 1 to 5 to GDK_BUTTON[1-5]_MASK <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L280" class="blob-num js-line-number" data-line-number="280"></td>
        <td id="file-gdkevents-quartz-c-LC280" class="blob-code blob-code-inner js-file-line">  button = <span class="pl-c1">get_mouse_button_from_ns_event</span> (event);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L281" class="blob-num js-line-number" data-line-number="281"></td>
        <td id="file-gdkevents-quartz-c-LC281" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (button &gt;= <span class="pl-c1">1</span> &amp;&amp; button &lt;= <span class="pl-c1">5</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L282" class="blob-num js-line-number" data-line-number="282"></td>
        <td id="file-gdkevents-quartz-c-LC282" class="blob-code blob-code-inner js-file-line">    state = (<span class="pl-c1">1</span> &lt;&lt; (button + <span class="pl-c1">7</span>));</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L283" class="blob-num js-line-number" data-line-number="283"></td>
        <td id="file-gdkevents-quartz-c-LC283" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L284" class="blob-num js-line-number" data-line-number="284"></td>
        <td id="file-gdkevents-quartz-c-LC284" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> state;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L285" class="blob-num js-line-number" data-line-number="285"></td>
        <td id="file-gdkevents-quartz-c-LC285" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L286" class="blob-num js-line-number" data-line-number="286"></td>
        <td id="file-gdkevents-quartz-c-LC286" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L287" class="blob-num js-line-number" data-line-number="287"></td>
        <td id="file-gdkevents-quartz-c-LC287" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> GdkModifierType</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L288" class="blob-num js-line-number" data-line-number="288"></td>
        <td id="file-gdkevents-quartz-c-LC288" class="blob-code blob-code-inner js-file-line"><span class="pl-en">get_keyboard_modifiers_from_ns_flags</span> (NSUInteger nsflags)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L289" class="blob-num js-line-number" data-line-number="289"></td>
        <td id="file-gdkevents-quartz-c-LC289" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L290" class="blob-num js-line-number" data-line-number="290"></td>
        <td id="file-gdkevents-quartz-c-LC290" class="blob-code blob-code-inner js-file-line">  GdkModifierType modifiers = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L291" class="blob-num js-line-number" data-line-number="291"></td>
        <td id="file-gdkevents-quartz-c-LC291" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L292" class="blob-num js-line-number" data-line-number="292"></td>
        <td id="file-gdkevents-quartz-c-LC292" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (nsflags &amp; NSAlphaShiftKeyMask)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L293" class="blob-num js-line-number" data-line-number="293"></td>
        <td id="file-gdkevents-quartz-c-LC293" class="blob-code blob-code-inner js-file-line">    modifiers |= GDK_LOCK_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L294" class="blob-num js-line-number" data-line-number="294"></td>
        <td id="file-gdkevents-quartz-c-LC294" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (nsflags &amp; NSShiftKeyMask)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L295" class="blob-num js-line-number" data-line-number="295"></td>
        <td id="file-gdkevents-quartz-c-LC295" class="blob-code blob-code-inner js-file-line">    modifiers |= GDK_SHIFT_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L296" class="blob-num js-line-number" data-line-number="296"></td>
        <td id="file-gdkevents-quartz-c-LC296" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (nsflags &amp; NSControlKeyMask)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L297" class="blob-num js-line-number" data-line-number="297"></td>
        <td id="file-gdkevents-quartz-c-LC297" class="blob-code blob-code-inner js-file-line">    modifiers |= GDK_CONTROL_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L298" class="blob-num js-line-number" data-line-number="298"></td>
        <td id="file-gdkevents-quartz-c-LC298" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (nsflags &amp; NSAlternateKeyMask)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L299" class="blob-num js-line-number" data-line-number="299"></td>
        <td id="file-gdkevents-quartz-c-LC299" class="blob-code blob-code-inner js-file-line">    modifiers |= GDK_MOD1_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L300" class="blob-num js-line-number" data-line-number="300"></td>
        <td id="file-gdkevents-quartz-c-LC300" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (nsflags &amp; NSCommandKeyMask)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L301" class="blob-num js-line-number" data-line-number="301"></td>
        <td id="file-gdkevents-quartz-c-LC301" class="blob-code blob-code-inner js-file-line">    modifiers |= GDK_MOD2_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L302" class="blob-num js-line-number" data-line-number="302"></td>
        <td id="file-gdkevents-quartz-c-LC302" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L303" class="blob-num js-line-number" data-line-number="303"></td>
        <td id="file-gdkevents-quartz-c-LC303" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> modifiers;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L304" class="blob-num js-line-number" data-line-number="304"></td>
        <td id="file-gdkevents-quartz-c-LC304" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L305" class="blob-num js-line-number" data-line-number="305"></td>
        <td id="file-gdkevents-quartz-c-LC305" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L306" class="blob-num js-line-number" data-line-number="306"></td>
        <td id="file-gdkevents-quartz-c-LC306" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> GdkModifierType</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L307" class="blob-num js-line-number" data-line-number="307"></td>
        <td id="file-gdkevents-quartz-c-LC307" class="blob-code blob-code-inner js-file-line"><span class="pl-en">get_keyboard_modifiers_from_ns_event</span> (NSEvent *nsevent)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L308" class="blob-num js-line-number" data-line-number="308"></td>
        <td id="file-gdkevents-quartz-c-LC308" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L309" class="blob-num js-line-number" data-line-number="309"></td>
        <td id="file-gdkevents-quartz-c-LC309" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> <span class="pl-c1">get_keyboard_modifiers_from_ns_flags</span> ([nsevent modifierFlags]);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L310" class="blob-num js-line-number" data-line-number="310"></td>
        <td id="file-gdkevents-quartz-c-LC310" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L311" class="blob-num js-line-number" data-line-number="311"></td>
        <td id="file-gdkevents-quartz-c-LC311" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L312" class="blob-num js-line-number" data-line-number="312"></td>
        <td id="file-gdkevents-quartz-c-LC312" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Return an event mask from an NSEvent <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L313" class="blob-num js-line-number" data-line-number="313"></td>
        <td id="file-gdkevents-quartz-c-LC313" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> GdkEventMask</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L314" class="blob-num js-line-number" data-line-number="314"></td>
        <td id="file-gdkevents-quartz-c-LC314" class="blob-code blob-code-inner js-file-line"><span class="pl-en">get_event_mask_from_ns_event</span> (NSEvent *nsevent)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L315" class="blob-num js-line-number" data-line-number="315"></td>
        <td id="file-gdkevents-quartz-c-LC315" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L316" class="blob-num js-line-number" data-line-number="316"></td>
        <td id="file-gdkevents-quartz-c-LC316" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">switch</span> ([nsevent type])</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L317" class="blob-num js-line-number" data-line-number="317"></td>
        <td id="file-gdkevents-quartz-c-LC317" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L318" class="blob-num js-line-number" data-line-number="318"></td>
        <td id="file-gdkevents-quartz-c-LC318" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSLeftMouseDown:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L319" class="blob-num js-line-number" data-line-number="319"></td>
        <td id="file-gdkevents-quartz-c-LC319" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSRightMouseDown:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L320" class="blob-num js-line-number" data-line-number="320"></td>
        <td id="file-gdkevents-quartz-c-LC320" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSOtherMouseDown:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L321" class="blob-num js-line-number" data-line-number="321"></td>
        <td id="file-gdkevents-quartz-c-LC321" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> GDK_BUTTON_PRESS_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L322" class="blob-num js-line-number" data-line-number="322"></td>
        <td id="file-gdkevents-quartz-c-LC322" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSLeftMouseUp:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L323" class="blob-num js-line-number" data-line-number="323"></td>
        <td id="file-gdkevents-quartz-c-LC323" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSRightMouseUp:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L324" class="blob-num js-line-number" data-line-number="324"></td>
        <td id="file-gdkevents-quartz-c-LC324" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSOtherMouseUp:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L325" class="blob-num js-line-number" data-line-number="325"></td>
        <td id="file-gdkevents-quartz-c-LC325" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> GDK_BUTTON_RELEASE_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L326" class="blob-num js-line-number" data-line-number="326"></td>
        <td id="file-gdkevents-quartz-c-LC326" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSMouseMoved:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L327" class="blob-num js-line-number" data-line-number="327"></td>
        <td id="file-gdkevents-quartz-c-LC327" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L328" class="blob-num js-line-number" data-line-number="328"></td>
        <td id="file-gdkevents-quartz-c-LC328" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSScrollWheel:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L329" class="blob-num js-line-number" data-line-number="329"></td>
        <td id="file-gdkevents-quartz-c-LC329" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> Since applications that want button press events can get</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L330" class="blob-num js-line-number" data-line-number="330"></td>
        <td id="file-gdkevents-quartz-c-LC330" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * scroll events on X11 (since scroll wheel events are really</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L331" class="blob-num js-line-number" data-line-number="331"></td>
        <td id="file-gdkevents-quartz-c-LC331" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * button press events there), we need to use GDK_BUTTON_PRESS_MASK too.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L332" class="blob-num js-line-number" data-line-number="332"></td>
        <td id="file-gdkevents-quartz-c-LC332" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L333" class="blob-num js-line-number" data-line-number="333"></td>
        <td id="file-gdkevents-quartz-c-LC333" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> GDK_SCROLL_MASK | GDK_BUTTON_PRESS_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L334" class="blob-num js-line-number" data-line-number="334"></td>
        <td id="file-gdkevents-quartz-c-LC334" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSLeftMouseDragged:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L335" class="blob-num js-line-number" data-line-number="335"></td>
        <td id="file-gdkevents-quartz-c-LC335" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> (GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK |</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L336" class="blob-num js-line-number" data-line-number="336"></td>
        <td id="file-gdkevents-quartz-c-LC336" class="blob-code blob-code-inner js-file-line">	      GDK_BUTTON_MOTION_MASK | GDK_BUTTON1_MOTION_MASK |</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L337" class="blob-num js-line-number" data-line-number="337"></td>
        <td id="file-gdkevents-quartz-c-LC337" class="blob-code blob-code-inner js-file-line">	      GDK_BUTTON1_MASK);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L338" class="blob-num js-line-number" data-line-number="338"></td>
        <td id="file-gdkevents-quartz-c-LC338" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSRightMouseDragged:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L339" class="blob-num js-line-number" data-line-number="339"></td>
        <td id="file-gdkevents-quartz-c-LC339" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> (GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK |</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L340" class="blob-num js-line-number" data-line-number="340"></td>
        <td id="file-gdkevents-quartz-c-LC340" class="blob-code blob-code-inner js-file-line">	      GDK_BUTTON_MOTION_MASK | GDK_BUTTON3_MOTION_MASK |</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L341" class="blob-num js-line-number" data-line-number="341"></td>
        <td id="file-gdkevents-quartz-c-LC341" class="blob-code blob-code-inner js-file-line">	      GDK_BUTTON3_MASK);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L342" class="blob-num js-line-number" data-line-number="342"></td>
        <td id="file-gdkevents-quartz-c-LC342" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSOtherMouseDragged:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L343" class="blob-num js-line-number" data-line-number="343"></td>
        <td id="file-gdkevents-quartz-c-LC343" class="blob-code blob-code-inner js-file-line">      {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L344" class="blob-num js-line-number" data-line-number="344"></td>
        <td id="file-gdkevents-quartz-c-LC344" class="blob-code blob-code-inner js-file-line">	GdkEventMask mask;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L345" class="blob-num js-line-number" data-line-number="345"></td>
        <td id="file-gdkevents-quartz-c-LC345" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L346" class="blob-num js-line-number" data-line-number="346"></td>
        <td id="file-gdkevents-quartz-c-LC346" class="blob-code blob-code-inner js-file-line">	mask = (GDK_POINTER_MOTION_MASK |</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L347" class="blob-num js-line-number" data-line-number="347"></td>
        <td id="file-gdkevents-quartz-c-LC347" class="blob-code blob-code-inner js-file-line">		GDK_POINTER_MOTION_HINT_MASK |</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L348" class="blob-num js-line-number" data-line-number="348"></td>
        <td id="file-gdkevents-quartz-c-LC348" class="blob-code blob-code-inner js-file-line">		GDK_BUTTON_MOTION_MASK);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L349" class="blob-num js-line-number" data-line-number="349"></td>
        <td id="file-gdkevents-quartz-c-LC349" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L350" class="blob-num js-line-number" data-line-number="350"></td>
        <td id="file-gdkevents-quartz-c-LC350" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">get_mouse_button_from_ns_event</span> (nsevent) == <span class="pl-c1">2</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L351" class="blob-num js-line-number" data-line-number="351"></td>
        <td id="file-gdkevents-quartz-c-LC351" class="blob-code blob-code-inner js-file-line">	  mask |= (GDK_BUTTON2_MOTION_MASK | GDK_BUTTON2_MOTION_MASK |</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L352" class="blob-num js-line-number" data-line-number="352"></td>
        <td id="file-gdkevents-quartz-c-LC352" class="blob-code blob-code-inner js-file-line">		   GDK_BUTTON2_MASK);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L353" class="blob-num js-line-number" data-line-number="353"></td>
        <td id="file-gdkevents-quartz-c-LC353" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L354" class="blob-num js-line-number" data-line-number="354"></td>
        <td id="file-gdkevents-quartz-c-LC354" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> mask;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L355" class="blob-num js-line-number" data-line-number="355"></td>
        <td id="file-gdkevents-quartz-c-LC355" class="blob-code blob-code-inner js-file-line">      }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L356" class="blob-num js-line-number" data-line-number="356"></td>
        <td id="file-gdkevents-quartz-c-LC356" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSEventTypeMagnify:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L357" class="blob-num js-line-number" data-line-number="357"></td>
        <td id="file-gdkevents-quartz-c-LC357" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSEventTypeRotate:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L358" class="blob-num js-line-number" data-line-number="358"></td>
        <td id="file-gdkevents-quartz-c-LC358" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> GDK_TOUCHPAD_GESTURE_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L359" class="blob-num js-line-number" data-line-number="359"></td>
        <td id="file-gdkevents-quartz-c-LC359" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSKeyDown:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L360" class="blob-num js-line-number" data-line-number="360"></td>
        <td id="file-gdkevents-quartz-c-LC360" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSKeyUp:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L361" class="blob-num js-line-number" data-line-number="361"></td>
        <td id="file-gdkevents-quartz-c-LC361" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSFlagsChanged:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L362" class="blob-num js-line-number" data-line-number="362"></td>
        <td id="file-gdkevents-quartz-c-LC362" class="blob-code blob-code-inner js-file-line">      {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L363" class="blob-num js-line-number" data-line-number="363"></td>
        <td id="file-gdkevents-quartz-c-LC363" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">switch</span> (<span class="pl-c1">_gdk_quartz_keys_event_type</span> (nsevent))</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L364" class="blob-num js-line-number" data-line-number="364"></td>
        <td id="file-gdkevents-quartz-c-LC364" class="blob-code blob-code-inner js-file-line">	  {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L365" class="blob-num js-line-number" data-line-number="365"></td>
        <td id="file-gdkevents-quartz-c-LC365" class="blob-code blob-code-inner js-file-line">	  <span class="pl-k">case</span> GDK_KEY_PRESS:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L366" class="blob-num js-line-number" data-line-number="366"></td>
        <td id="file-gdkevents-quartz-c-LC366" class="blob-code blob-code-inner js-file-line">	    <span class="pl-k">return</span> GDK_KEY_PRESS_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L367" class="blob-num js-line-number" data-line-number="367"></td>
        <td id="file-gdkevents-quartz-c-LC367" class="blob-code blob-code-inner js-file-line">	  <span class="pl-k">case</span> GDK_KEY_RELEASE:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L368" class="blob-num js-line-number" data-line-number="368"></td>
        <td id="file-gdkevents-quartz-c-LC368" class="blob-code blob-code-inner js-file-line">	    <span class="pl-k">return</span> GDK_KEY_RELEASE_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L369" class="blob-num js-line-number" data-line-number="369"></td>
        <td id="file-gdkevents-quartz-c-LC369" class="blob-code blob-code-inner js-file-line">	  <span class="pl-k">case</span> GDK_NOTHING:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L370" class="blob-num js-line-number" data-line-number="370"></td>
        <td id="file-gdkevents-quartz-c-LC370" class="blob-code blob-code-inner js-file-line">	    <span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L371" class="blob-num js-line-number" data-line-number="371"></td>
        <td id="file-gdkevents-quartz-c-LC371" class="blob-code blob-code-inner js-file-line">	  <span class="pl-k">default</span>:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L372" class="blob-num js-line-number" data-line-number="372"></td>
        <td id="file-gdkevents-quartz-c-LC372" class="blob-code blob-code-inner js-file-line">	    <span class="pl-c1">g_assert_not_reached</span> ();</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L373" class="blob-num js-line-number" data-line-number="373"></td>
        <td id="file-gdkevents-quartz-c-LC373" class="blob-code blob-code-inner js-file-line">	  }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L374" class="blob-num js-line-number" data-line-number="374"></td>
        <td id="file-gdkevents-quartz-c-LC374" class="blob-code blob-code-inner js-file-line">      }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L375" class="blob-num js-line-number" data-line-number="375"></td>
        <td id="file-gdkevents-quartz-c-LC375" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L376" class="blob-num js-line-number" data-line-number="376"></td>
        <td id="file-gdkevents-quartz-c-LC376" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L377" class="blob-num js-line-number" data-line-number="377"></td>
        <td id="file-gdkevents-quartz-c-LC377" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSMouseEntered:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L378" class="blob-num js-line-number" data-line-number="378"></td>
        <td id="file-gdkevents-quartz-c-LC378" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> GDK_ENTER_NOTIFY_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L379" class="blob-num js-line-number" data-line-number="379"></td>
        <td id="file-gdkevents-quartz-c-LC379" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L380" class="blob-num js-line-number" data-line-number="380"></td>
        <td id="file-gdkevents-quartz-c-LC380" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSMouseExited:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L381" class="blob-num js-line-number" data-line-number="381"></td>
        <td id="file-gdkevents-quartz-c-LC381" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> GDK_LEAVE_NOTIFY_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L382" class="blob-num js-line-number" data-line-number="382"></td>
        <td id="file-gdkevents-quartz-c-LC382" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L383" class="blob-num js-line-number" data-line-number="383"></td>
        <td id="file-gdkevents-quartz-c-LC383" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">default</span>:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L384" class="blob-num js-line-number" data-line-number="384"></td>
        <td id="file-gdkevents-quartz-c-LC384" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">g_assert_not_reached</span> ();</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L385" class="blob-num js-line-number" data-line-number="385"></td>
        <td id="file-gdkevents-quartz-c-LC385" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L386" class="blob-num js-line-number" data-line-number="386"></td>
        <td id="file-gdkevents-quartz-c-LC386" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L387" class="blob-num js-line-number" data-line-number="387"></td>
        <td id="file-gdkevents-quartz-c-LC387" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L388" class="blob-num js-line-number" data-line-number="388"></td>
        <td id="file-gdkevents-quartz-c-LC388" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L389" class="blob-num js-line-number" data-line-number="389"></td>
        <td id="file-gdkevents-quartz-c-LC389" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L390" class="blob-num js-line-number" data-line-number="390"></td>
        <td id="file-gdkevents-quartz-c-LC390" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L391" class="blob-num js-line-number" data-line-number="391"></td>
        <td id="file-gdkevents-quartz-c-LC391" class="blob-code blob-code-inner js-file-line"><span class="pl-en">get_window_point_from_screen_point</span> (GdkWindow *window,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L392" class="blob-num js-line-number" data-line-number="392"></td>
        <td id="file-gdkevents-quartz-c-LC392" class="blob-code blob-code-inner js-file-line">                                    NSPoint    screen_point,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L393" class="blob-num js-line-number" data-line-number="393"></td>
        <td id="file-gdkevents-quartz-c-LC393" class="blob-code blob-code-inner js-file-line">                                    gint      *x,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L394" class="blob-num js-line-number" data-line-number="394"></td>
        <td id="file-gdkevents-quartz-c-LC394" class="blob-code blob-code-inner js-file-line">                                    gint      *y)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L395" class="blob-num js-line-number" data-line-number="395"></td>
        <td id="file-gdkevents-quartz-c-LC395" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L396" class="blob-num js-line-number" data-line-number="396"></td>
        <td id="file-gdkevents-quartz-c-LC396" class="blob-code blob-code-inner js-file-line">  NSPoint point;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L397" class="blob-num js-line-number" data-line-number="397"></td>
        <td id="file-gdkevents-quartz-c-LC397" class="blob-code blob-code-inner js-file-line">  NSWindow *nswindow;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L398" class="blob-num js-line-number" data-line-number="398"></td>
        <td id="file-gdkevents-quartz-c-LC398" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L399" class="blob-num js-line-number" data-line-number="399"></td>
        <td id="file-gdkevents-quartz-c-LC399" class="blob-code blob-code-inner js-file-line">  nswindow = ((GdkWindowImplQuartz *)window-&gt;<span class="pl-smi">impl</span>)-&gt;<span class="pl-smi">toplevel</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L400" class="blob-num js-line-number" data-line-number="400"></td>
        <td id="file-gdkevents-quartz-c-LC400" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L401" class="blob-num js-line-number" data-line-number="401"></td>
        <td id="file-gdkevents-quartz-c-LC401" class="blob-code blob-code-inner js-file-line">  point = [nswindow convertScreenToBase:screen_point];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L402" class="blob-num js-line-number" data-line-number="402"></td>
        <td id="file-gdkevents-quartz-c-LC402" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L403" class="blob-num js-line-number" data-line-number="403"></td>
        <td id="file-gdkevents-quartz-c-LC403" class="blob-code blob-code-inner js-file-line">  *x = point.<span class="pl-smi">x</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L404" class="blob-num js-line-number" data-line-number="404"></td>
        <td id="file-gdkevents-quartz-c-LC404" class="blob-code blob-code-inner js-file-line">  *y = window-&gt;<span class="pl-smi">height</span> - point.<span class="pl-smi">y</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L405" class="blob-num js-line-number" data-line-number="405"></td>
        <td id="file-gdkevents-quartz-c-LC405" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L406" class="blob-num js-line-number" data-line-number="406"></td>
        <td id="file-gdkevents-quartz-c-LC406" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L407" class="blob-num js-line-number" data-line-number="407"></td>
        <td id="file-gdkevents-quartz-c-LC407" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> gboolean</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L408" class="blob-num js-line-number" data-line-number="408"></td>
        <td id="file-gdkevents-quartz-c-LC408" class="blob-code blob-code-inner js-file-line"><span class="pl-en">is_mouse_button_press_event</span> (NSEventType type)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L409" class="blob-num js-line-number" data-line-number="409"></td>
        <td id="file-gdkevents-quartz-c-LC409" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L410" class="blob-num js-line-number" data-line-number="410"></td>
        <td id="file-gdkevents-quartz-c-LC410" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">switch</span> (type)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L411" class="blob-num js-line-number" data-line-number="411"></td>
        <td id="file-gdkevents-quartz-c-LC411" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L412" class="blob-num js-line-number" data-line-number="412"></td>
        <td id="file-gdkevents-quartz-c-LC412" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">case</span> NSLeftMouseDown:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L413" class="blob-num js-line-number" data-line-number="413"></td>
        <td id="file-gdkevents-quartz-c-LC413" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">case</span> NSRightMouseDown:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L414" class="blob-num js-line-number" data-line-number="414"></td>
        <td id="file-gdkevents-quartz-c-LC414" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">case</span> NSOtherMouseDown:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L415" class="blob-num js-line-number" data-line-number="415"></td>
        <td id="file-gdkevents-quartz-c-LC415" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> <span class="pl-c1">TRUE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L416" class="blob-num js-line-number" data-line-number="416"></td>
        <td id="file-gdkevents-quartz-c-LC416" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L417" class="blob-num js-line-number" data-line-number="417"></td>
        <td id="file-gdkevents-quartz-c-LC417" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L418" class="blob-num js-line-number" data-line-number="418"></td>
        <td id="file-gdkevents-quartz-c-LC418" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L419" class="blob-num js-line-number" data-line-number="419"></td>
        <td id="file-gdkevents-quartz-c-LC419" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L420" class="blob-num js-line-number" data-line-number="420"></td>
        <td id="file-gdkevents-quartz-c-LC420" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L421" class="blob-num js-line-number" data-line-number="421"></td>
        <td id="file-gdkevents-quartz-c-LC421" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> GdkWindow *</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L422" class="blob-num js-line-number" data-line-number="422"></td>
        <td id="file-gdkevents-quartz-c-LC422" class="blob-code blob-code-inner js-file-line"><span class="pl-en">get_toplevel_from_ns_event</span> (NSEvent *nsevent,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L423" class="blob-num js-line-number" data-line-number="423"></td>
        <td id="file-gdkevents-quartz-c-LC423" class="blob-code blob-code-inner js-file-line">                            NSPoint *screen_point,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L424" class="blob-num js-line-number" data-line-number="424"></td>
        <td id="file-gdkevents-quartz-c-LC424" class="blob-code blob-code-inner js-file-line">                            gint    *x,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L425" class="blob-num js-line-number" data-line-number="425"></td>
        <td id="file-gdkevents-quartz-c-LC425" class="blob-code blob-code-inner js-file-line">                            gint    *y)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L426" class="blob-num js-line-number" data-line-number="426"></td>
        <td id="file-gdkevents-quartz-c-LC426" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L427" class="blob-num js-line-number" data-line-number="427"></td>
        <td id="file-gdkevents-quartz-c-LC427" class="blob-code blob-code-inner js-file-line">  GdkWindow *toplevel = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L428" class="blob-num js-line-number" data-line-number="428"></td>
        <td id="file-gdkevents-quartz-c-LC428" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L429" class="blob-num js-line-number" data-line-number="429"></td>
        <td id="file-gdkevents-quartz-c-LC429" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> ([nsevent window])</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L430" class="blob-num js-line-number" data-line-number="430"></td>
        <td id="file-gdkevents-quartz-c-LC430" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L431" class="blob-num js-line-number" data-line-number="431"></td>
        <td id="file-gdkevents-quartz-c-LC431" class="blob-code blob-code-inner js-file-line">      GdkQuartzView *view;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L432" class="blob-num js-line-number" data-line-number="432"></td>
        <td id="file-gdkevents-quartz-c-LC432" class="blob-code blob-code-inner js-file-line">      NSPoint point, view_point;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L433" class="blob-num js-line-number" data-line-number="433"></td>
        <td id="file-gdkevents-quartz-c-LC433" class="blob-code blob-code-inner js-file-line">      NSRect view_frame;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L434" class="blob-num js-line-number" data-line-number="434"></td>
        <td id="file-gdkevents-quartz-c-LC434" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L435" class="blob-num js-line-number" data-line-number="435"></td>
        <td id="file-gdkevents-quartz-c-LC435" class="blob-code blob-code-inner js-file-line">      view = (GdkQuartzView *)[[nsevent window] contentView];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L436" class="blob-num js-line-number" data-line-number="436"></td>
        <td id="file-gdkevents-quartz-c-LC436" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L437" class="blob-num js-line-number" data-line-number="437"></td>
        <td id="file-gdkevents-quartz-c-LC437" class="blob-code blob-code-inner js-file-line">      toplevel = [view gdkWindow];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L438" class="blob-num js-line-number" data-line-number="438"></td>
        <td id="file-gdkevents-quartz-c-LC438" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L439" class="blob-num js-line-number" data-line-number="439"></td>
        <td id="file-gdkevents-quartz-c-LC439" class="blob-code blob-code-inner js-file-line">      point = [nsevent locationInWindow];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L440" class="blob-num js-line-number" data-line-number="440"></td>
        <td id="file-gdkevents-quartz-c-LC440" class="blob-code blob-code-inner js-file-line">      view_point = [view convertPoint:point fromView:nil];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L441" class="blob-num js-line-number" data-line-number="441"></td>
        <td id="file-gdkevents-quartz-c-LC441" class="blob-code blob-code-inner js-file-line">      view_frame = [view frame];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L442" class="blob-num js-line-number" data-line-number="442"></td>
        <td id="file-gdkevents-quartz-c-LC442" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L443" class="blob-num js-line-number" data-line-number="443"></td>
        <td id="file-gdkevents-quartz-c-LC443" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> NSEvents come in with a window set, but with window coordinates</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L444" class="blob-num js-line-number" data-line-number="444"></td>
        <td id="file-gdkevents-quartz-c-LC444" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * out of window bounds. For e.g. moved events this is fine, we use</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L445" class="blob-num js-line-number" data-line-number="445"></td>
        <td id="file-gdkevents-quartz-c-LC445" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * this information to properly handle enter/leave notify and motion</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L446" class="blob-num js-line-number" data-line-number="446"></td>
        <td id="file-gdkevents-quartz-c-LC446" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * events. For mouse button press/release, we want to avoid forwarding</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L447" class="blob-num js-line-number" data-line-number="447"></td>
        <td id="file-gdkevents-quartz-c-LC447" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * these events however, because the window they relate to is not the</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L448" class="blob-num js-line-number" data-line-number="448"></td>
        <td id="file-gdkevents-quartz-c-LC448" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * window set in the event. This situation appears to occur when button</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L449" class="blob-num js-line-number" data-line-number="449"></td>
        <td id="file-gdkevents-quartz-c-LC449" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * presses come in just before (or just after?) a window is resized and</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L450" class="blob-num js-line-number" data-line-number="450"></td>
        <td id="file-gdkevents-quartz-c-LC450" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * also when a button press occurs on the OS X window titlebar.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L451" class="blob-num js-line-number" data-line-number="451"></td>
        <td id="file-gdkevents-quartz-c-LC451" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       *</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L452" class="blob-num js-line-number" data-line-number="452"></td>
        <td id="file-gdkevents-quartz-c-LC452" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * By setting toplevel to NULL, we do another attempt to get the right</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L453" class="blob-num js-line-number" data-line-number="453"></td>
        <td id="file-gdkevents-quartz-c-LC453" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * toplevel window below.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L454" class="blob-num js-line-number" data-line-number="454"></td>
        <td id="file-gdkevents-quartz-c-LC454" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L455" class="blob-num js-line-number" data-line-number="455"></td>
        <td id="file-gdkevents-quartz-c-LC455" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (<span class="pl-c1">is_mouse_button_press_event</span> ([nsevent type]) &amp;&amp;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L456" class="blob-num js-line-number" data-line-number="456"></td>
        <td id="file-gdkevents-quartz-c-LC456" class="blob-code blob-code-inner js-file-line">          (view_point.<span class="pl-smi">x</span> &lt; view_frame.<span class="pl-smi">origin</span>.<span class="pl-smi">x</span> ||</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L457" class="blob-num js-line-number" data-line-number="457"></td>
        <td id="file-gdkevents-quartz-c-LC457" class="blob-code blob-code-inner js-file-line">           view_point.<span class="pl-smi">x</span> &gt;= view_frame.<span class="pl-smi">origin</span>.<span class="pl-smi">x</span> + view_frame.<span class="pl-smi">size</span>.<span class="pl-smi">width</span> ||</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L458" class="blob-num js-line-number" data-line-number="458"></td>
        <td id="file-gdkevents-quartz-c-LC458" class="blob-code blob-code-inner js-file-line">           view_point.<span class="pl-smi">y</span> &lt; view_frame.<span class="pl-smi">origin</span>.<span class="pl-smi">y</span> ||</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L459" class="blob-num js-line-number" data-line-number="459"></td>
        <td id="file-gdkevents-quartz-c-LC459" class="blob-code blob-code-inner js-file-line">           view_point.<span class="pl-smi">y</span> &gt;= view_frame.<span class="pl-smi">origin</span>.<span class="pl-smi">y</span> + view_frame.<span class="pl-smi">size</span>.<span class="pl-smi">height</span>))</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L460" class="blob-num js-line-number" data-line-number="460"></td>
        <td id="file-gdkevents-quartz-c-LC460" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L461" class="blob-num js-line-number" data-line-number="461"></td>
        <td id="file-gdkevents-quartz-c-LC461" class="blob-code blob-code-inner js-file-line">          toplevel = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L462" class="blob-num js-line-number" data-line-number="462"></td>
        <td id="file-gdkevents-quartz-c-LC462" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L463" class="blob-num js-line-number" data-line-number="463"></td>
        <td id="file-gdkevents-quartz-c-LC463" class="blob-code blob-code-inner js-file-line">          <span class="pl-c"><span class="pl-c">/*</span> This is a hack for button presses to break all grabs. E.g. if</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L464" class="blob-num js-line-number" data-line-number="464"></td>
        <td id="file-gdkevents-quartz-c-LC464" class="blob-code blob-code-inner js-file-line"><span class="pl-c">           * a menu is open and one clicks on the title bar (or anywhere</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L465" class="blob-num js-line-number" data-line-number="465"></td>
        <td id="file-gdkevents-quartz-c-LC465" class="blob-code blob-code-inner js-file-line"><span class="pl-c">           * out of window bounds), we really want to pop down the menu (by</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L466" class="blob-num js-line-number" data-line-number="466"></td>
        <td id="file-gdkevents-quartz-c-LC466" class="blob-code blob-code-inner js-file-line"><span class="pl-c">           * breaking the grabs) before OS X handles the action of the title</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L467" class="blob-num js-line-number" data-line-number="467"></td>
        <td id="file-gdkevents-quartz-c-LC467" class="blob-code blob-code-inner js-file-line"><span class="pl-c">           * bar button.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L468" class="blob-num js-line-number" data-line-number="468"></td>
        <td id="file-gdkevents-quartz-c-LC468" class="blob-code blob-code-inner js-file-line"><span class="pl-c">           *</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L469" class="blob-num js-line-number" data-line-number="469"></td>
        <td id="file-gdkevents-quartz-c-LC469" class="blob-code blob-code-inner js-file-line"><span class="pl-c">           * Because we cannot ingest this event into GDK, we have to do it</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L470" class="blob-num js-line-number" data-line-number="470"></td>
        <td id="file-gdkevents-quartz-c-LC470" class="blob-code blob-code-inner js-file-line"><span class="pl-c">           * here, not very nice.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L471" class="blob-num js-line-number" data-line-number="471"></td>
        <td id="file-gdkevents-quartz-c-LC471" class="blob-code blob-code-inner js-file-line"><span class="pl-c">           <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L472" class="blob-num js-line-number" data-line-number="472"></td>
        <td id="file-gdkevents-quartz-c-LC472" class="blob-code blob-code-inner js-file-line">          <span class="pl-c1">_gdk_quartz_events_break_all_grabs</span> (<span class="pl-c1">get_time_from_ns_event</span> (nsevent));</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L473" class="blob-num js-line-number" data-line-number="473"></td>
        <td id="file-gdkevents-quartz-c-LC473" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L474" class="blob-num js-line-number" data-line-number="474"></td>
        <td id="file-gdkevents-quartz-c-LC474" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L475" class="blob-num js-line-number" data-line-number="475"></td>
        <td id="file-gdkevents-quartz-c-LC475" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L476" class="blob-num js-line-number" data-line-number="476"></td>
        <td id="file-gdkevents-quartz-c-LC476" class="blob-code blob-code-inner js-file-line">          *screen_point = [[nsevent window] convertBaseToScreen:point];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L477" class="blob-num js-line-number" data-line-number="477"></td>
        <td id="file-gdkevents-quartz-c-LC477" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L478" class="blob-num js-line-number" data-line-number="478"></td>
        <td id="file-gdkevents-quartz-c-LC478" class="blob-code blob-code-inner js-file-line">          *x = point.<span class="pl-smi">x</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L479" class="blob-num js-line-number" data-line-number="479"></td>
        <td id="file-gdkevents-quartz-c-LC479" class="blob-code blob-code-inner js-file-line">          *y = toplevel-&gt;<span class="pl-smi">height</span> - point.<span class="pl-smi">y</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L480" class="blob-num js-line-number" data-line-number="480"></td>
        <td id="file-gdkevents-quartz-c-LC480" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L481" class="blob-num js-line-number" data-line-number="481"></td>
        <td id="file-gdkevents-quartz-c-LC481" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L482" class="blob-num js-line-number" data-line-number="482"></td>
        <td id="file-gdkevents-quartz-c-LC482" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L483" class="blob-num js-line-number" data-line-number="483"></td>
        <td id="file-gdkevents-quartz-c-LC483" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (!toplevel)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L484" class="blob-num js-line-number" data-line-number="484"></td>
        <td id="file-gdkevents-quartz-c-LC484" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L485" class="blob-num js-line-number" data-line-number="485"></td>
        <td id="file-gdkevents-quartz-c-LC485" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> Fallback used when no NSWindow set.  This happens e.g. when</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L486" class="blob-num js-line-number" data-line-number="486"></td>
        <td id="file-gdkevents-quartz-c-LC486" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * we allow motion events without a window set in gdk_event_translate()</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L487" class="blob-num js-line-number" data-line-number="487"></td>
        <td id="file-gdkevents-quartz-c-LC487" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * that occur immediately after the main menu bar was clicked/used.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L488" class="blob-num js-line-number" data-line-number="488"></td>
        <td id="file-gdkevents-quartz-c-LC488" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * This fallback will not return coordinates contained in a window&#39;s</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L489" class="blob-num js-line-number" data-line-number="489"></td>
        <td id="file-gdkevents-quartz-c-LC489" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * titlebar.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L490" class="blob-num js-line-number" data-line-number="490"></td>
        <td id="file-gdkevents-quartz-c-LC490" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L491" class="blob-num js-line-number" data-line-number="491"></td>
        <td id="file-gdkevents-quartz-c-LC491" class="blob-code blob-code-inner js-file-line">      *screen_point = [NSEvent mouseLocation];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L492" class="blob-num js-line-number" data-line-number="492"></td>
        <td id="file-gdkevents-quartz-c-LC492" class="blob-code blob-code-inner js-file-line">      toplevel = <span class="pl-c1">find_toplevel_under_pointer</span> (_gdk_display,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L493" class="blob-num js-line-number" data-line-number="493"></td>
        <td id="file-gdkevents-quartz-c-LC493" class="blob-code blob-code-inner js-file-line">                                              *screen_point,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L494" class="blob-num js-line-number" data-line-number="494"></td>
        <td id="file-gdkevents-quartz-c-LC494" class="blob-code blob-code-inner js-file-line">                                              x, y);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L495" class="blob-num js-line-number" data-line-number="495"></td>
        <td id="file-gdkevents-quartz-c-LC495" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L496" class="blob-num js-line-number" data-line-number="496"></td>
        <td id="file-gdkevents-quartz-c-LC496" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L497" class="blob-num js-line-number" data-line-number="497"></td>
        <td id="file-gdkevents-quartz-c-LC497" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> toplevel;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L498" class="blob-num js-line-number" data-line-number="498"></td>
        <td id="file-gdkevents-quartz-c-LC498" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L499" class="blob-num js-line-number" data-line-number="499"></td>
        <td id="file-gdkevents-quartz-c-LC499" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L500" class="blob-num js-line-number" data-line-number="500"></td>
        <td id="file-gdkevents-quartz-c-LC500" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> GdkEvent *</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L501" class="blob-num js-line-number" data-line-number="501"></td>
        <td id="file-gdkevents-quartz-c-LC501" class="blob-code blob-code-inner js-file-line"><span class="pl-en">create_focus_event</span> (GdkWindow *window,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L502" class="blob-num js-line-number" data-line-number="502"></td>
        <td id="file-gdkevents-quartz-c-LC502" class="blob-code blob-code-inner js-file-line">		    gboolean   in)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L503" class="blob-num js-line-number" data-line-number="503"></td>
        <td id="file-gdkevents-quartz-c-LC503" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L504" class="blob-num js-line-number" data-line-number="504"></td>
        <td id="file-gdkevents-quartz-c-LC504" class="blob-code blob-code-inner js-file-line">  GdkEvent *event;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L505" class="blob-num js-line-number" data-line-number="505"></td>
        <td id="file-gdkevents-quartz-c-LC505" class="blob-code blob-code-inner js-file-line">  GdkQuartzDeviceManagerCore *device_manager;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L506" class="blob-num js-line-number" data-line-number="506"></td>
        <td id="file-gdkevents-quartz-c-LC506" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L507" class="blob-num js-line-number" data-line-number="507"></td>
        <td id="file-gdkevents-quartz-c-LC507" class="blob-code blob-code-inner js-file-line">  event = <span class="pl-c1">gdk_event_new</span> (GDK_FOCUS_CHANGE);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L508" class="blob-num js-line-number" data-line-number="508"></td>
        <td id="file-gdkevents-quartz-c-LC508" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">focus_change</span>.<span class="pl-smi">window</span> = window;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L509" class="blob-num js-line-number" data-line-number="509"></td>
        <td id="file-gdkevents-quartz-c-LC509" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">focus_change</span>.<span class="pl-smi">in</span> = in;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L510" class="blob-num js-line-number" data-line-number="510"></td>
        <td id="file-gdkevents-quartz-c-LC510" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L511" class="blob-num js-line-number" data-line-number="511"></td>
        <td id="file-gdkevents-quartz-c-LC511" class="blob-code blob-code-inner js-file-line">  device_manager = <span class="pl-c1">GDK_QUARTZ_DEVICE_MANAGER_CORE</span> (_gdk_display-&gt;<span class="pl-smi">device_manager</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L512" class="blob-num js-line-number" data-line-number="512"></td>
        <td id="file-gdkevents-quartz-c-LC512" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">gdk_event_set_device</span> (event, device_manager-&gt;<span class="pl-smi">core_keyboard</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L513" class="blob-num js-line-number" data-line-number="513"></td>
        <td id="file-gdkevents-quartz-c-LC513" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">gdk_event_set_seat</span> (event, <span class="pl-c1">gdk_device_get_seat</span> (device_manager-&gt;<span class="pl-smi">core_keyboard</span>));</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L514" class="blob-num js-line-number" data-line-number="514"></td>
        <td id="file-gdkevents-quartz-c-LC514" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L515" class="blob-num js-line-number" data-line-number="515"></td>
        <td id="file-gdkevents-quartz-c-LC515" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> event;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L516" class="blob-num js-line-number" data-line-number="516"></td>
        <td id="file-gdkevents-quartz-c-LC516" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L517" class="blob-num js-line-number" data-line-number="517"></td>
        <td id="file-gdkevents-quartz-c-LC517" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L518" class="blob-num js-line-number" data-line-number="518"></td>
        <td id="file-gdkevents-quartz-c-LC518" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L519" class="blob-num js-line-number" data-line-number="519"></td>
        <td id="file-gdkevents-quartz-c-LC519" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L520" class="blob-num js-line-number" data-line-number="520"></td>
        <td id="file-gdkevents-quartz-c-LC520" class="blob-code blob-code-inner js-file-line"><span class="pl-en">generate_motion_event</span> (GdkWindow *window)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L521" class="blob-num js-line-number" data-line-number="521"></td>
        <td id="file-gdkevents-quartz-c-LC521" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L522" class="blob-num js-line-number" data-line-number="522"></td>
        <td id="file-gdkevents-quartz-c-LC522" class="blob-code blob-code-inner js-file-line">  NSPoint screen_point;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L523" class="blob-num js-line-number" data-line-number="523"></td>
        <td id="file-gdkevents-quartz-c-LC523" class="blob-code blob-code-inner js-file-line">  GdkEvent *event;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L524" class="blob-num js-line-number" data-line-number="524"></td>
        <td id="file-gdkevents-quartz-c-LC524" class="blob-code blob-code-inner js-file-line">  gint x, y, x_root, y_root;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L525" class="blob-num js-line-number" data-line-number="525"></td>
        <td id="file-gdkevents-quartz-c-LC525" class="blob-code blob-code-inner js-file-line">  GdkQuartzDeviceManagerCore *device_manager;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L526" class="blob-num js-line-number" data-line-number="526"></td>
        <td id="file-gdkevents-quartz-c-LC526" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L527" class="blob-num js-line-number" data-line-number="527"></td>
        <td id="file-gdkevents-quartz-c-LC527" class="blob-code blob-code-inner js-file-line">  event = <span class="pl-c1">gdk_event_new</span> (GDK_MOTION_NOTIFY);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L528" class="blob-num js-line-number" data-line-number="528"></td>
        <td id="file-gdkevents-quartz-c-LC528" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">window</span> = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L529" class="blob-num js-line-number" data-line-number="529"></td>
        <td id="file-gdkevents-quartz-c-LC529" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">send_event</span> = <span class="pl-c1">TRUE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L530" class="blob-num js-line-number" data-line-number="530"></td>
        <td id="file-gdkevents-quartz-c-LC530" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L531" class="blob-num js-line-number" data-line-number="531"></td>
        <td id="file-gdkevents-quartz-c-LC531" class="blob-code blob-code-inner js-file-line">  screen_point = [NSEvent mouseLocation];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L532" class="blob-num js-line-number" data-line-number="532"></td>
        <td id="file-gdkevents-quartz-c-LC532" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L533" class="blob-num js-line-number" data-line-number="533"></td>
        <td id="file-gdkevents-quartz-c-LC533" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">_gdk_quartz_window_nspoint_to_gdk_xy</span> (screen_point, &amp;x_root, &amp;y_root);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L534" class="blob-num js-line-number" data-line-number="534"></td>
        <td id="file-gdkevents-quartz-c-LC534" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">get_window_point_from_screen_point</span> (window, screen_point, &amp;x, &amp;y);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L535" class="blob-num js-line-number" data-line-number="535"></td>
        <td id="file-gdkevents-quartz-c-LC535" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L536" class="blob-num js-line-number" data-line-number="536"></td>
        <td id="file-gdkevents-quartz-c-LC536" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">type</span> = GDK_MOTION_NOTIFY;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L537" class="blob-num js-line-number" data-line-number="537"></td>
        <td id="file-gdkevents-quartz-c-LC537" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">motion</span>.<span class="pl-smi">window</span> = window;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L538" class="blob-num js-line-number" data-line-number="538"></td>
        <td id="file-gdkevents-quartz-c-LC538" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">motion</span>.<span class="pl-smi">time</span> = <span class="pl-c1">get_time_from_ns_event</span> ([NSApp currentEvent]);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L539" class="blob-num js-line-number" data-line-number="539"></td>
        <td id="file-gdkevents-quartz-c-LC539" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">motion</span>.<span class="pl-smi">x</span> = x;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L540" class="blob-num js-line-number" data-line-number="540"></td>
        <td id="file-gdkevents-quartz-c-LC540" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">motion</span>.<span class="pl-smi">y</span> = y;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L541" class="blob-num js-line-number" data-line-number="541"></td>
        <td id="file-gdkevents-quartz-c-LC541" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">motion</span>.<span class="pl-smi">x_root</span> = x_root;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L542" class="blob-num js-line-number" data-line-number="542"></td>
        <td id="file-gdkevents-quartz-c-LC542" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">motion</span>.<span class="pl-smi">y_root</span> = y_root;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L543" class="blob-num js-line-number" data-line-number="543"></td>
        <td id="file-gdkevents-quartz-c-LC543" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> FIXME event-&gt;axes <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L544" class="blob-num js-line-number" data-line-number="544"></td>
        <td id="file-gdkevents-quartz-c-LC544" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">motion</span>.<span class="pl-smi">state</span> = <span class="pl-c1">_gdk_quartz_events_get_current_keyboard_modifiers</span> () |</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L545" class="blob-num js-line-number" data-line-number="545"></td>
        <td id="file-gdkevents-quartz-c-LC545" class="blob-code blob-code-inner js-file-line">                        <span class="pl-c1">_gdk_quartz_events_get_current_mouse_modifiers</span> ();</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L546" class="blob-num js-line-number" data-line-number="546"></td>
        <td id="file-gdkevents-quartz-c-LC546" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">motion</span>.<span class="pl-smi">is_hint</span> = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L547" class="blob-num js-line-number" data-line-number="547"></td>
        <td id="file-gdkevents-quartz-c-LC547" class="blob-code blob-code-inner js-file-line">  device_manager = <span class="pl-c1">GDK_QUARTZ_DEVICE_MANAGER_CORE</span> (_gdk_display-&gt;<span class="pl-smi">device_manager</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L548" class="blob-num js-line-number" data-line-number="548"></td>
        <td id="file-gdkevents-quartz-c-LC548" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">motion</span>.<span class="pl-smi">device</span> = device_manager-&gt;<span class="pl-smi">core_pointer</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L549" class="blob-num js-line-number" data-line-number="549"></td>
        <td id="file-gdkevents-quartz-c-LC549" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">gdk_event_set_seat</span> (event, <span class="pl-c1">gdk_device_get_seat</span> (device_manager-&gt;<span class="pl-smi">core_pointer</span>));</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L550" class="blob-num js-line-number" data-line-number="550"></td>
        <td id="file-gdkevents-quartz-c-LC550" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L551" class="blob-num js-line-number" data-line-number="551"></td>
        <td id="file-gdkevents-quartz-c-LC551" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">append_event</span> (event, <span class="pl-c1">TRUE</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L552" class="blob-num js-line-number" data-line-number="552"></td>
        <td id="file-gdkevents-quartz-c-LC552" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L553" class="blob-num js-line-number" data-line-number="553"></td>
        <td id="file-gdkevents-quartz-c-LC553" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L554" class="blob-num js-line-number" data-line-number="554"></td>
        <td id="file-gdkevents-quartz-c-LC554" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Note: Used to both set a new focus window and to unset the old one. <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L555" class="blob-num js-line-number" data-line-number="555"></td>
        <td id="file-gdkevents-quartz-c-LC555" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L556" class="blob-num js-line-number" data-line-number="556"></td>
        <td id="file-gdkevents-quartz-c-LC556" class="blob-code blob-code-inner js-file-line"><span class="pl-en">_gdk_quartz_events_update_focus_window</span> (GdkWindow *window,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L557" class="blob-num js-line-number" data-line-number="557"></td>
        <td id="file-gdkevents-quartz-c-LC557" class="blob-code blob-code-inner js-file-line">					gboolean   got_focus)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L558" class="blob-num js-line-number" data-line-number="558"></td>
        <td id="file-gdkevents-quartz-c-LC558" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L559" class="blob-num js-line-number" data-line-number="559"></td>
        <td id="file-gdkevents-quartz-c-LC559" class="blob-code blob-code-inner js-file-line">  GdkEvent *event;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L560" class="blob-num js-line-number" data-line-number="560"></td>
        <td id="file-gdkevents-quartz-c-LC560" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L561" class="blob-num js-line-number" data-line-number="561"></td>
        <td id="file-gdkevents-quartz-c-LC561" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (got_focus &amp;&amp; window == current_keyboard_window)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L562" class="blob-num js-line-number" data-line-number="562"></td>
        <td id="file-gdkevents-quartz-c-LC562" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L563" class="blob-num js-line-number" data-line-number="563"></td>
        <td id="file-gdkevents-quartz-c-LC563" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L564" class="blob-num js-line-number" data-line-number="564"></td>
        <td id="file-gdkevents-quartz-c-LC564" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> FIXME: Don&#39;t do this when grabbed? Or make GdkQuartzNSWindow</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L565" class="blob-num js-line-number" data-line-number="565"></td>
        <td id="file-gdkevents-quartz-c-LC565" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * disallow it in the first place instead?</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L566" class="blob-num js-line-number" data-line-number="566"></td>
        <td id="file-gdkevents-quartz-c-LC566" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L567" class="blob-num js-line-number" data-line-number="567"></td>
        <td id="file-gdkevents-quartz-c-LC567" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L568" class="blob-num js-line-number" data-line-number="568"></td>
        <td id="file-gdkevents-quartz-c-LC568" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (!got_focus &amp;&amp; window == current_keyboard_window)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L569" class="blob-num js-line-number" data-line-number="569"></td>
        <td id="file-gdkevents-quartz-c-LC569" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L570" class="blob-num js-line-number" data-line-number="570"></td>
        <td id="file-gdkevents-quartz-c-LC570" class="blob-code blob-code-inner js-file-line">      event = <span class="pl-c1">create_focus_event</span> (current_keyboard_window, <span class="pl-c1">FALSE</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L571" class="blob-num js-line-number" data-line-number="571"></td>
        <td id="file-gdkevents-quartz-c-LC571" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">append_event</span> (event, <span class="pl-c1">FALSE</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L572" class="blob-num js-line-number" data-line-number="572"></td>
        <td id="file-gdkevents-quartz-c-LC572" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">g_object_unref</span> (current_keyboard_window);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L573" class="blob-num js-line-number" data-line-number="573"></td>
        <td id="file-gdkevents-quartz-c-LC573" class="blob-code blob-code-inner js-file-line">      current_keyboard_window = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L574" class="blob-num js-line-number" data-line-number="574"></td>
        <td id="file-gdkevents-quartz-c-LC574" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L575" class="blob-num js-line-number" data-line-number="575"></td>
        <td id="file-gdkevents-quartz-c-LC575" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L576" class="blob-num js-line-number" data-line-number="576"></td>
        <td id="file-gdkevents-quartz-c-LC576" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (got_focus)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L577" class="blob-num js-line-number" data-line-number="577"></td>
        <td id="file-gdkevents-quartz-c-LC577" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L578" class="blob-num js-line-number" data-line-number="578"></td>
        <td id="file-gdkevents-quartz-c-LC578" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (current_keyboard_window)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L579" class="blob-num js-line-number" data-line-number="579"></td>
        <td id="file-gdkevents-quartz-c-LC579" class="blob-code blob-code-inner js-file-line">	{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L580" class="blob-num js-line-number" data-line-number="580"></td>
        <td id="file-gdkevents-quartz-c-LC580" class="blob-code blob-code-inner js-file-line">	  event = <span class="pl-c1">create_focus_event</span> (current_keyboard_window, <span class="pl-c1">FALSE</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L581" class="blob-num js-line-number" data-line-number="581"></td>
        <td id="file-gdkevents-quartz-c-LC581" class="blob-code blob-code-inner js-file-line">	  <span class="pl-c1">append_event</span> (event, <span class="pl-c1">FALSE</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L582" class="blob-num js-line-number" data-line-number="582"></td>
        <td id="file-gdkevents-quartz-c-LC582" class="blob-code blob-code-inner js-file-line">	  <span class="pl-c1">g_object_unref</span> (current_keyboard_window);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L583" class="blob-num js-line-number" data-line-number="583"></td>
        <td id="file-gdkevents-quartz-c-LC583" class="blob-code blob-code-inner js-file-line">	  current_keyboard_window = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L584" class="blob-num js-line-number" data-line-number="584"></td>
        <td id="file-gdkevents-quartz-c-LC584" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L585" class="blob-num js-line-number" data-line-number="585"></td>
        <td id="file-gdkevents-quartz-c-LC585" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L586" class="blob-num js-line-number" data-line-number="586"></td>
        <td id="file-gdkevents-quartz-c-LC586" class="blob-code blob-code-inner js-file-line">      event = <span class="pl-c1">create_focus_event</span> (window, <span class="pl-c1">TRUE</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L587" class="blob-num js-line-number" data-line-number="587"></td>
        <td id="file-gdkevents-quartz-c-LC587" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">append_event</span> (event, <span class="pl-c1">FALSE</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L588" class="blob-num js-line-number" data-line-number="588"></td>
        <td id="file-gdkevents-quartz-c-LC588" class="blob-code blob-code-inner js-file-line">      current_keyboard_window = <span class="pl-c1">g_object_ref</span> (window);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L589" class="blob-num js-line-number" data-line-number="589"></td>
        <td id="file-gdkevents-quartz-c-LC589" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L590" class="blob-num js-line-number" data-line-number="590"></td>
        <td id="file-gdkevents-quartz-c-LC590" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> We just became the active window.  Unlike X11, Mac OS X does</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L591" class="blob-num js-line-number" data-line-number="591"></td>
        <td id="file-gdkevents-quartz-c-LC591" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * not send us motion events while the window does not have focus</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L592" class="blob-num js-line-number" data-line-number="592"></td>
        <td id="file-gdkevents-quartz-c-LC592" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * (&quot;is not key&quot;).  We send a dummy motion notify event now, so that</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L593" class="blob-num js-line-number" data-line-number="593"></td>
        <td id="file-gdkevents-quartz-c-LC593" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * everything in the window is set to correct state.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L594" class="blob-num js-line-number" data-line-number="594"></td>
        <td id="file-gdkevents-quartz-c-LC594" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L595" class="blob-num js-line-number" data-line-number="595"></td>
        <td id="file-gdkevents-quartz-c-LC595" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">generate_motion_event</span> (window);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L596" class="blob-num js-line-number" data-line-number="596"></td>
        <td id="file-gdkevents-quartz-c-LC596" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L597" class="blob-num js-line-number" data-line-number="597"></td>
        <td id="file-gdkevents-quartz-c-LC597" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L598" class="blob-num js-line-number" data-line-number="598"></td>
        <td id="file-gdkevents-quartz-c-LC598" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L599" class="blob-num js-line-number" data-line-number="599"></td>
        <td id="file-gdkevents-quartz-c-LC599" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L600" class="blob-num js-line-number" data-line-number="600"></td>
        <td id="file-gdkevents-quartz-c-LC600" class="blob-code blob-code-inner js-file-line"><span class="pl-en">_gdk_quartz_events_send_map_event</span> (GdkWindow *window)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L601" class="blob-num js-line-number" data-line-number="601"></td>
        <td id="file-gdkevents-quartz-c-LC601" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L602" class="blob-num js-line-number" data-line-number="602"></td>
        <td id="file-gdkevents-quartz-c-LC602" class="blob-code blob-code-inner js-file-line">  GdkWindowImplQuartz *impl = <span class="pl-c1">GDK_WINDOW_IMPL_QUARTZ</span> (window-&gt;<span class="pl-smi">impl</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L603" class="blob-num js-line-number" data-line-number="603"></td>
        <td id="file-gdkevents-quartz-c-LC603" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L604" class="blob-num js-line-number" data-line-number="604"></td>
        <td id="file-gdkevents-quartz-c-LC604" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (!impl-&gt;<span class="pl-smi">toplevel</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L605" class="blob-num js-line-number" data-line-number="605"></td>
        <td id="file-gdkevents-quartz-c-LC605" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L606" class="blob-num js-line-number" data-line-number="606"></td>
        <td id="file-gdkevents-quartz-c-LC606" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L607" class="blob-num js-line-number" data-line-number="607"></td>
        <td id="file-gdkevents-quartz-c-LC607" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (window-&gt;<span class="pl-smi">event_mask</span> &amp; GDK_STRUCTURE_MASK)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L608" class="blob-num js-line-number" data-line-number="608"></td>
        <td id="file-gdkevents-quartz-c-LC608" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L609" class="blob-num js-line-number" data-line-number="609"></td>
        <td id="file-gdkevents-quartz-c-LC609" class="blob-code blob-code-inner js-file-line">      GdkEvent event;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L610" class="blob-num js-line-number" data-line-number="610"></td>
        <td id="file-gdkevents-quartz-c-LC610" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L611" class="blob-num js-line-number" data-line-number="611"></td>
        <td id="file-gdkevents-quartz-c-LC611" class="blob-code blob-code-inner js-file-line">      event.<span class="pl-smi">any</span>.<span class="pl-smi">type</span> = GDK_MAP;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L612" class="blob-num js-line-number" data-line-number="612"></td>
        <td id="file-gdkevents-quartz-c-LC612" class="blob-code blob-code-inner js-file-line">      event.<span class="pl-smi">any</span>.<span class="pl-smi">window</span> = window;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L613" class="blob-num js-line-number" data-line-number="613"></td>
        <td id="file-gdkevents-quartz-c-LC613" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L614" class="blob-num js-line-number" data-line-number="614"></td>
        <td id="file-gdkevents-quartz-c-LC614" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">gdk_event_put</span> (&amp;event);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L615" class="blob-num js-line-number" data-line-number="615"></td>
        <td id="file-gdkevents-quartz-c-LC615" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L616" class="blob-num js-line-number" data-line-number="616"></td>
        <td id="file-gdkevents-quartz-c-LC616" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L617" class="blob-num js-line-number" data-line-number="617"></td>
        <td id="file-gdkevents-quartz-c-LC617" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L618" class="blob-num js-line-number" data-line-number="618"></td>
        <td id="file-gdkevents-quartz-c-LC618" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> GdkWindow *</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L619" class="blob-num js-line-number" data-line-number="619"></td>
        <td id="file-gdkevents-quartz-c-LC619" class="blob-code blob-code-inner js-file-line"><span class="pl-en">find_toplevel_under_pointer</span> (GdkDisplay *display,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L620" class="blob-num js-line-number" data-line-number="620"></td>
        <td id="file-gdkevents-quartz-c-LC620" class="blob-code blob-code-inner js-file-line">                             NSPoint     screen_point,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L621" class="blob-num js-line-number" data-line-number="621"></td>
        <td id="file-gdkevents-quartz-c-LC621" class="blob-code blob-code-inner js-file-line">                             gint       *x,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L622" class="blob-num js-line-number" data-line-number="622"></td>
        <td id="file-gdkevents-quartz-c-LC622" class="blob-code blob-code-inner js-file-line">                             gint       *y)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L623" class="blob-num js-line-number" data-line-number="623"></td>
        <td id="file-gdkevents-quartz-c-LC623" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L624" class="blob-num js-line-number" data-line-number="624"></td>
        <td id="file-gdkevents-quartz-c-LC624" class="blob-code blob-code-inner js-file-line">  GdkWindow *toplevel;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L625" class="blob-num js-line-number" data-line-number="625"></td>
        <td id="file-gdkevents-quartz-c-LC625" class="blob-code blob-code-inner js-file-line">  GdkPointerWindowInfo *info;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L626" class="blob-num js-line-number" data-line-number="626"></td>
        <td id="file-gdkevents-quartz-c-LC626" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L627" class="blob-num js-line-number" data-line-number="627"></td>
        <td id="file-gdkevents-quartz-c-LC627" class="blob-code blob-code-inner js-file-line">  info = <span class="pl-c1">_gdk_display_get_pointer_info</span> (display, <span class="pl-c1">GDK_QUARTZ_DEVICE_MANAGER_CORE</span> (display-&gt;<span class="pl-smi">device_manager</span>)-&gt;<span class="pl-smi">core_pointer</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L628" class="blob-num js-line-number" data-line-number="628"></td>
        <td id="file-gdkevents-quartz-c-LC628" class="blob-code blob-code-inner js-file-line">  toplevel = info-&gt;<span class="pl-smi">toplevel_under_pointer</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L629" class="blob-num js-line-number" data-line-number="629"></td>
        <td id="file-gdkevents-quartz-c-LC629" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (toplevel &amp;&amp; <span class="pl-c1">WINDOW_IS_TOPLEVEL</span> (toplevel))</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L630" class="blob-num js-line-number" data-line-number="630"></td>
        <td id="file-gdkevents-quartz-c-LC630" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">get_window_point_from_screen_point</span> (toplevel, screen_point, x, y);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L631" class="blob-num js-line-number" data-line-number="631"></td>
        <td id="file-gdkevents-quartz-c-LC631" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L632" class="blob-num js-line-number" data-line-number="632"></td>
        <td id="file-gdkevents-quartz-c-LC632" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (toplevel)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L633" class="blob-num js-line-number" data-line-number="633"></td>
        <td id="file-gdkevents-quartz-c-LC633" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L634" class="blob-num js-line-number" data-line-number="634"></td>
        <td id="file-gdkevents-quartz-c-LC634" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> If the coordinates are out of window bounds, this toplevel is not</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L635" class="blob-num js-line-number" data-line-number="635"></td>
        <td id="file-gdkevents-quartz-c-LC635" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * under the pointer and we thus return NULL. This can occur when</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L636" class="blob-num js-line-number" data-line-number="636"></td>
        <td id="file-gdkevents-quartz-c-LC636" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * toplevel under pointer has not yet been updated due to a very recent</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L637" class="blob-num js-line-number" data-line-number="637"></td>
        <td id="file-gdkevents-quartz-c-LC637" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * window resize. Alternatively, we should no longer be relying on</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L638" class="blob-num js-line-number" data-line-number="638"></td>
        <td id="file-gdkevents-quartz-c-LC638" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * the toplevel_under_pointer value which is maintained in gdkwindow.c.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L639" class="blob-num js-line-number" data-line-number="639"></td>
        <td id="file-gdkevents-quartz-c-LC639" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L640" class="blob-num js-line-number" data-line-number="640"></td>
        <td id="file-gdkevents-quartz-c-LC640" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (*x &lt; <span class="pl-c1">0</span> || *y &lt; <span class="pl-c1">0</span> || *x &gt;= toplevel-&gt;<span class="pl-smi">width</span> || *y &gt;= toplevel-&gt;<span class="pl-smi">height</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L641" class="blob-num js-line-number" data-line-number="641"></td>
        <td id="file-gdkevents-quartz-c-LC641" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L642" class="blob-num js-line-number" data-line-number="642"></td>
        <td id="file-gdkevents-quartz-c-LC642" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L643" class="blob-num js-line-number" data-line-number="643"></td>
        <td id="file-gdkevents-quartz-c-LC643" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L644" class="blob-num js-line-number" data-line-number="644"></td>
        <td id="file-gdkevents-quartz-c-LC644" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> toplevel;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L645" class="blob-num js-line-number" data-line-number="645"></td>
        <td id="file-gdkevents-quartz-c-LC645" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L646" class="blob-num js-line-number" data-line-number="646"></td>
        <td id="file-gdkevents-quartz-c-LC646" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L647" class="blob-num js-line-number" data-line-number="647"></td>
        <td id="file-gdkevents-quartz-c-LC647" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> GdkWindow *</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L648" class="blob-num js-line-number" data-line-number="648"></td>
        <td id="file-gdkevents-quartz-c-LC648" class="blob-code blob-code-inner js-file-line"><span class="pl-en">find_toplevel_for_keyboard_event</span> (NSEvent *nsevent)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L649" class="blob-num js-line-number" data-line-number="649"></td>
        <td id="file-gdkevents-quartz-c-LC649" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L650" class="blob-num js-line-number" data-line-number="650"></td>
        <td id="file-gdkevents-quartz-c-LC650" class="blob-code blob-code-inner js-file-line">  GList *list, *l;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L651" class="blob-num js-line-number" data-line-number="651"></td>
        <td id="file-gdkevents-quartz-c-LC651" class="blob-code blob-code-inner js-file-line">  GdkWindow *window;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L652" class="blob-num js-line-number" data-line-number="652"></td>
        <td id="file-gdkevents-quartz-c-LC652" class="blob-code blob-code-inner js-file-line">  GdkDisplay *display;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L653" class="blob-num js-line-number" data-line-number="653"></td>
        <td id="file-gdkevents-quartz-c-LC653" class="blob-code blob-code-inner js-file-line">  GdkQuartzView *view;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L654" class="blob-num js-line-number" data-line-number="654"></td>
        <td id="file-gdkevents-quartz-c-LC654" class="blob-code blob-code-inner js-file-line">  GdkDeviceManager *device_manager;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L655" class="blob-num js-line-number" data-line-number="655"></td>
        <td id="file-gdkevents-quartz-c-LC655" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L656" class="blob-num js-line-number" data-line-number="656"></td>
        <td id="file-gdkevents-quartz-c-LC656" class="blob-code blob-code-inner js-file-line">  view = (GdkQuartzView *)[[nsevent window] contentView];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L657" class="blob-num js-line-number" data-line-number="657"></td>
        <td id="file-gdkevents-quartz-c-LC657" class="blob-code blob-code-inner js-file-line">  window = [view gdkWindow];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L658" class="blob-num js-line-number" data-line-number="658"></td>
        <td id="file-gdkevents-quartz-c-LC658" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L659" class="blob-num js-line-number" data-line-number="659"></td>
        <td id="file-gdkevents-quartz-c-LC659" class="blob-code blob-code-inner js-file-line">  display = <span class="pl-c1">gdk_window_get_display</span> (window);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L660" class="blob-num js-line-number" data-line-number="660"></td>
        <td id="file-gdkevents-quartz-c-LC660" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L661" class="blob-num js-line-number" data-line-number="661"></td>
        <td id="file-gdkevents-quartz-c-LC661" class="blob-code blob-code-inner js-file-line">  device_manager = <span class="pl-c1">gdk_display_get_device_manager</span> (display);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L662" class="blob-num js-line-number" data-line-number="662"></td>
        <td id="file-gdkevents-quartz-c-LC662" class="blob-code blob-code-inner js-file-line">  list = <span class="pl-c1">gdk_device_manager_list_devices</span> (device_manager,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L663" class="blob-num js-line-number" data-line-number="663"></td>
        <td id="file-gdkevents-quartz-c-LC663" class="blob-code blob-code-inner js-file-line">                                          GDK_DEVICE_TYPE_MASTER);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L664" class="blob-num js-line-number" data-line-number="664"></td>
        <td id="file-gdkevents-quartz-c-LC664" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">for</span> (l = list; l; l = l-&gt;<span class="pl-smi">next</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L665" class="blob-num js-line-number" data-line-number="665"></td>
        <td id="file-gdkevents-quartz-c-LC665" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L666" class="blob-num js-line-number" data-line-number="666"></td>
        <td id="file-gdkevents-quartz-c-LC666" class="blob-code blob-code-inner js-file-line">      GdkDeviceGrabInfo *grab;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L667" class="blob-num js-line-number" data-line-number="667"></td>
        <td id="file-gdkevents-quartz-c-LC667" class="blob-code blob-code-inner js-file-line">      GdkDevice *device = l-&gt;<span class="pl-smi">data</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L668" class="blob-num js-line-number" data-line-number="668"></td>
        <td id="file-gdkevents-quartz-c-LC668" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L669" class="blob-num js-line-number" data-line-number="669"></td>
        <td id="file-gdkevents-quartz-c-LC669" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (<span class="pl-c1">gdk_device_get_source</span>(device) != GDK_SOURCE_KEYBOARD)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L670" class="blob-num js-line-number" data-line-number="670"></td>
        <td id="file-gdkevents-quartz-c-LC670" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">continue</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L671" class="blob-num js-line-number" data-line-number="671"></td>
        <td id="file-gdkevents-quartz-c-LC671" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L672" class="blob-num js-line-number" data-line-number="672"></td>
        <td id="file-gdkevents-quartz-c-LC672" class="blob-code blob-code-inner js-file-line">      grab = <span class="pl-c1">_gdk_display_get_last_device_grab</span> (display, device);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L673" class="blob-num js-line-number" data-line-number="673"></td>
        <td id="file-gdkevents-quartz-c-LC673" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (grab &amp;&amp; grab-&gt;<span class="pl-smi">window</span> &amp;&amp; !grab-&gt;<span class="pl-smi">owner_events</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L674" class="blob-num js-line-number" data-line-number="674"></td>
        <td id="file-gdkevents-quartz-c-LC674" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L675" class="blob-num js-line-number" data-line-number="675"></td>
        <td id="file-gdkevents-quartz-c-LC675" class="blob-code blob-code-inner js-file-line">          window = <span class="pl-c1">gdk_window_get_effective_toplevel</span> (grab-&gt;<span class="pl-smi">window</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L676" class="blob-num js-line-number" data-line-number="676"></td>
        <td id="file-gdkevents-quartz-c-LC676" class="blob-code blob-code-inner js-file-line">          <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L677" class="blob-num js-line-number" data-line-number="677"></td>
        <td id="file-gdkevents-quartz-c-LC677" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L678" class="blob-num js-line-number" data-line-number="678"></td>
        <td id="file-gdkevents-quartz-c-LC678" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L679" class="blob-num js-line-number" data-line-number="679"></td>
        <td id="file-gdkevents-quartz-c-LC679" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L680" class="blob-num js-line-number" data-line-number="680"></td>
        <td id="file-gdkevents-quartz-c-LC680" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">g_list_free</span> (list);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L681" class="blob-num js-line-number" data-line-number="681"></td>
        <td id="file-gdkevents-quartz-c-LC681" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L682" class="blob-num js-line-number" data-line-number="682"></td>
        <td id="file-gdkevents-quartz-c-LC682" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> window;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L683" class="blob-num js-line-number" data-line-number="683"></td>
        <td id="file-gdkevents-quartz-c-LC683" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L684" class="blob-num js-line-number" data-line-number="684"></td>
        <td id="file-gdkevents-quartz-c-LC684" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L685" class="blob-num js-line-number" data-line-number="685"></td>
        <td id="file-gdkevents-quartz-c-LC685" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> GdkWindow *</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L686" class="blob-num js-line-number" data-line-number="686"></td>
        <td id="file-gdkevents-quartz-c-LC686" class="blob-code blob-code-inner js-file-line"><span class="pl-en">find_toplevel_for_mouse_event</span> (NSEvent    *nsevent,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L687" class="blob-num js-line-number" data-line-number="687"></td>
        <td id="file-gdkevents-quartz-c-LC687" class="blob-code blob-code-inner js-file-line">                               gint       *x,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L688" class="blob-num js-line-number" data-line-number="688"></td>
        <td id="file-gdkevents-quartz-c-LC688" class="blob-code blob-code-inner js-file-line">                               gint       *y)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L689" class="blob-num js-line-number" data-line-number="689"></td>
        <td id="file-gdkevents-quartz-c-LC689" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L690" class="blob-num js-line-number" data-line-number="690"></td>
        <td id="file-gdkevents-quartz-c-LC690" class="blob-code blob-code-inner js-file-line">  NSPoint screen_point;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L691" class="blob-num js-line-number" data-line-number="691"></td>
        <td id="file-gdkevents-quartz-c-LC691" class="blob-code blob-code-inner js-file-line">  NSEventType event_type;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L692" class="blob-num js-line-number" data-line-number="692"></td>
        <td id="file-gdkevents-quartz-c-LC692" class="blob-code blob-code-inner js-file-line">  GdkWindow *toplevel;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L693" class="blob-num js-line-number" data-line-number="693"></td>
        <td id="file-gdkevents-quartz-c-LC693" class="blob-code blob-code-inner js-file-line">  GdkDisplay *display;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L694" class="blob-num js-line-number" data-line-number="694"></td>
        <td id="file-gdkevents-quartz-c-LC694" class="blob-code blob-code-inner js-file-line">  GdkDeviceGrabInfo *grab;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L695" class="blob-num js-line-number" data-line-number="695"></td>
        <td id="file-gdkevents-quartz-c-LC695" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L696" class="blob-num js-line-number" data-line-number="696"></td>
        <td id="file-gdkevents-quartz-c-LC696" class="blob-code blob-code-inner js-file-line">  toplevel = <span class="pl-c1">get_toplevel_from_ns_event</span> (nsevent, &amp;screen_point, x, y);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L697" class="blob-num js-line-number" data-line-number="697"></td>
        <td id="file-gdkevents-quartz-c-LC697" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L698" class="blob-num js-line-number" data-line-number="698"></td>
        <td id="file-gdkevents-quartz-c-LC698" class="blob-code blob-code-inner js-file-line">  display = <span class="pl-c1">gdk_window_get_display</span> (toplevel);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L699" class="blob-num js-line-number" data-line-number="699"></td>
        <td id="file-gdkevents-quartz-c-LC699" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L700" class="blob-num js-line-number" data-line-number="700"></td>
        <td id="file-gdkevents-quartz-c-LC700" class="blob-code blob-code-inner js-file-line">  event_type = [nsevent type];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L701" class="blob-num js-line-number" data-line-number="701"></td>
        <td id="file-gdkevents-quartz-c-LC701" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L702" class="blob-num js-line-number" data-line-number="702"></td>
        <td id="file-gdkevents-quartz-c-LC702" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> From the docs for XGrabPointer:</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L703" class="blob-num js-line-number" data-line-number="703"></td>
        <td id="file-gdkevents-quartz-c-LC703" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   *</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L704" class="blob-num js-line-number" data-line-number="704"></td>
        <td id="file-gdkevents-quartz-c-LC704" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * If owner_events is True and if a generated pointer event</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L705" class="blob-num js-line-number" data-line-number="705"></td>
        <td id="file-gdkevents-quartz-c-LC705" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * would normally be reported to this client, it is reported</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L706" class="blob-num js-line-number" data-line-number="706"></td>
        <td id="file-gdkevents-quartz-c-LC706" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * as usual. Otherwise, the event is reported with respect to</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L707" class="blob-num js-line-number" data-line-number="707"></td>
        <td id="file-gdkevents-quartz-c-LC707" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * the grab_window and is reported only if selected by</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L708" class="blob-num js-line-number" data-line-number="708"></td>
        <td id="file-gdkevents-quartz-c-LC708" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * event_mask. For either value of owner_events, unreported</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L709" class="blob-num js-line-number" data-line-number="709"></td>
        <td id="file-gdkevents-quartz-c-LC709" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * events are discarded.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L710" class="blob-num js-line-number" data-line-number="710"></td>
        <td id="file-gdkevents-quartz-c-LC710" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L711" class="blob-num js-line-number" data-line-number="711"></td>
        <td id="file-gdkevents-quartz-c-LC711" class="blob-code blob-code-inner js-file-line">  grab = <span class="pl-c1">_gdk_display_get_last_device_grab</span> (display,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L712" class="blob-num js-line-number" data-line-number="712"></td>
        <td id="file-gdkevents-quartz-c-LC712" class="blob-code blob-code-inner js-file-line">                                            <span class="pl-c1">GDK_QUARTZ_DEVICE_MANAGER_CORE</span> (display-&gt;<span class="pl-smi">device_manager</span>)-&gt;<span class="pl-smi">core_pointer</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L713" class="blob-num js-line-number" data-line-number="713"></td>
        <td id="file-gdkevents-quartz-c-LC713" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (<span class="pl-c1">WINDOW_IS_TOPLEVEL</span> (toplevel) &amp;&amp; grab)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L714" class="blob-num js-line-number" data-line-number="714"></td>
        <td id="file-gdkevents-quartz-c-LC714" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L715" class="blob-num js-line-number" data-line-number="715"></td>
        <td id="file-gdkevents-quartz-c-LC715" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> Implicit grabs do not go through XGrabPointer and thus the</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L716" class="blob-num js-line-number" data-line-number="716"></td>
        <td id="file-gdkevents-quartz-c-LC716" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * event mask should not be checked.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L717" class="blob-num js-line-number" data-line-number="717"></td>
        <td id="file-gdkevents-quartz-c-LC717" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L718" class="blob-num js-line-number" data-line-number="718"></td>
        <td id="file-gdkevents-quartz-c-LC718" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (!grab-&gt;<span class="pl-smi">implicit</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L719" class="blob-num js-line-number" data-line-number="719"></td>
        <td id="file-gdkevents-quartz-c-LC719" class="blob-code blob-code-inner js-file-line">          &amp;&amp; (grab-&gt;<span class="pl-smi">event_mask</span> &amp; <span class="pl-c1">get_event_mask_from_ns_event</span> (nsevent)) == <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L720" class="blob-num js-line-number" data-line-number="720"></td>
        <td id="file-gdkevents-quartz-c-LC720" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L721" class="blob-num js-line-number" data-line-number="721"></td>
        <td id="file-gdkevents-quartz-c-LC721" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L722" class="blob-num js-line-number" data-line-number="722"></td>
        <td id="file-gdkevents-quartz-c-LC722" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (grab-&gt;<span class="pl-smi">owner_events</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L723" class="blob-num js-line-number" data-line-number="723"></td>
        <td id="file-gdkevents-quartz-c-LC723" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L724" class="blob-num js-line-number" data-line-number="724"></td>
        <td id="file-gdkevents-quartz-c-LC724" class="blob-code blob-code-inner js-file-line">          <span class="pl-c"><span class="pl-c">/*</span> For owner events, we need to use the toplevel under the</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L725" class="blob-num js-line-number" data-line-number="725"></td>
        <td id="file-gdkevents-quartz-c-LC725" class="blob-code blob-code-inner js-file-line"><span class="pl-c">           * pointer, not the window from the NSEvent, since that is</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L726" class="blob-num js-line-number" data-line-number="726"></td>
        <td id="file-gdkevents-quartz-c-LC726" class="blob-code blob-code-inner js-file-line"><span class="pl-c">           * reported with respect to the key window, which could be</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L727" class="blob-num js-line-number" data-line-number="727"></td>
        <td id="file-gdkevents-quartz-c-LC727" class="blob-code blob-code-inner js-file-line"><span class="pl-c">           * wrong.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L728" class="blob-num js-line-number" data-line-number="728"></td>
        <td id="file-gdkevents-quartz-c-LC728" class="blob-code blob-code-inner js-file-line"><span class="pl-c">           <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L729" class="blob-num js-line-number" data-line-number="729"></td>
        <td id="file-gdkevents-quartz-c-LC729" class="blob-code blob-code-inner js-file-line">          GdkWindow *toplevel_under_pointer;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L730" class="blob-num js-line-number" data-line-number="730"></td>
        <td id="file-gdkevents-quartz-c-LC730" class="blob-code blob-code-inner js-file-line">          gint x_tmp, y_tmp;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L731" class="blob-num js-line-number" data-line-number="731"></td>
        <td id="file-gdkevents-quartz-c-LC731" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L732" class="blob-num js-line-number" data-line-number="732"></td>
        <td id="file-gdkevents-quartz-c-LC732" class="blob-code blob-code-inner js-file-line">          toplevel_under_pointer = <span class="pl-c1">find_toplevel_under_pointer</span> (display,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L733" class="blob-num js-line-number" data-line-number="733"></td>
        <td id="file-gdkevents-quartz-c-LC733" class="blob-code blob-code-inner js-file-line">                                                                screen_point,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L734" class="blob-num js-line-number" data-line-number="734"></td>
        <td id="file-gdkevents-quartz-c-LC734" class="blob-code blob-code-inner js-file-line">                                                                &amp;x_tmp, &amp;y_tmp);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L735" class="blob-num js-line-number" data-line-number="735"></td>
        <td id="file-gdkevents-quartz-c-LC735" class="blob-code blob-code-inner js-file-line">          <span class="pl-k">if</span> (toplevel_under_pointer)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L736" class="blob-num js-line-number" data-line-number="736"></td>
        <td id="file-gdkevents-quartz-c-LC736" class="blob-code blob-code-inner js-file-line">            {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L737" class="blob-num js-line-number" data-line-number="737"></td>
        <td id="file-gdkevents-quartz-c-LC737" class="blob-code blob-code-inner js-file-line">              toplevel = toplevel_under_pointer;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L738" class="blob-num js-line-number" data-line-number="738"></td>
        <td id="file-gdkevents-quartz-c-LC738" class="blob-code blob-code-inner js-file-line">              *x = x_tmp;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L739" class="blob-num js-line-number" data-line-number="739"></td>
        <td id="file-gdkevents-quartz-c-LC739" class="blob-code blob-code-inner js-file-line">              *y = y_tmp;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L740" class="blob-num js-line-number" data-line-number="740"></td>
        <td id="file-gdkevents-quartz-c-LC740" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L741" class="blob-num js-line-number" data-line-number="741"></td>
        <td id="file-gdkevents-quartz-c-LC741" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L742" class="blob-num js-line-number" data-line-number="742"></td>
        <td id="file-gdkevents-quartz-c-LC742" class="blob-code blob-code-inner js-file-line">          <span class="pl-k">return</span> toplevel;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L743" class="blob-num js-line-number" data-line-number="743"></td>
        <td id="file-gdkevents-quartz-c-LC743" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L744" class="blob-num js-line-number" data-line-number="744"></td>
        <td id="file-gdkevents-quartz-c-LC744" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L745" class="blob-num js-line-number" data-line-number="745"></td>
        <td id="file-gdkevents-quartz-c-LC745" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L746" class="blob-num js-line-number" data-line-number="746"></td>
        <td id="file-gdkevents-quartz-c-LC746" class="blob-code blob-code-inner js-file-line">          <span class="pl-c"><span class="pl-c">/*</span> Finally check the grab window. <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L747" class="blob-num js-line-number" data-line-number="747"></td>
        <td id="file-gdkevents-quartz-c-LC747" class="blob-code blob-code-inner js-file-line">          GdkWindow *grab_toplevel;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L748" class="blob-num js-line-number" data-line-number="748"></td>
        <td id="file-gdkevents-quartz-c-LC748" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L749" class="blob-num js-line-number" data-line-number="749"></td>
        <td id="file-gdkevents-quartz-c-LC749" class="blob-code blob-code-inner js-file-line">          grab_toplevel = <span class="pl-c1">gdk_window_get_effective_toplevel</span> (grab-&gt;<span class="pl-smi">window</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L750" class="blob-num js-line-number" data-line-number="750"></td>
        <td id="file-gdkevents-quartz-c-LC750" class="blob-code blob-code-inner js-file-line">          <span class="pl-c1">get_window_point_from_screen_point</span> (grab_toplevel, screen_point,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L751" class="blob-num js-line-number" data-line-number="751"></td>
        <td id="file-gdkevents-quartz-c-LC751" class="blob-code blob-code-inner js-file-line">                                              x, y);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L752" class="blob-num js-line-number" data-line-number="752"></td>
        <td id="file-gdkevents-quartz-c-LC752" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L753" class="blob-num js-line-number" data-line-number="753"></td>
        <td id="file-gdkevents-quartz-c-LC753" class="blob-code blob-code-inner js-file-line">          <span class="pl-k">return</span> grab_toplevel;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L754" class="blob-num js-line-number" data-line-number="754"></td>
        <td id="file-gdkevents-quartz-c-LC754" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L755" class="blob-num js-line-number" data-line-number="755"></td>
        <td id="file-gdkevents-quartz-c-LC755" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L756" class="blob-num js-line-number" data-line-number="756"></td>
        <td id="file-gdkevents-quartz-c-LC756" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L757" class="blob-num js-line-number" data-line-number="757"></td>
        <td id="file-gdkevents-quartz-c-LC757" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L758" class="blob-num js-line-number" data-line-number="758"></td>
        <td id="file-gdkevents-quartz-c-LC758" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L759" class="blob-num js-line-number" data-line-number="759"></td>
        <td id="file-gdkevents-quartz-c-LC759" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L760" class="blob-num js-line-number" data-line-number="760"></td>
        <td id="file-gdkevents-quartz-c-LC760" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> The non-grabbed case. <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L761" class="blob-num js-line-number" data-line-number="761"></td>
        <td id="file-gdkevents-quartz-c-LC761" class="blob-code blob-code-inner js-file-line">      GdkWindow *toplevel_under_pointer;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L762" class="blob-num js-line-number" data-line-number="762"></td>
        <td id="file-gdkevents-quartz-c-LC762" class="blob-code blob-code-inner js-file-line">      gint x_tmp, y_tmp;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L763" class="blob-num js-line-number" data-line-number="763"></td>
        <td id="file-gdkevents-quartz-c-LC763" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L764" class="blob-num js-line-number" data-line-number="764"></td>
        <td id="file-gdkevents-quartz-c-LC764" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> Ignore all events but mouse moved that might be on the title</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L765" class="blob-num js-line-number" data-line-number="765"></td>
        <td id="file-gdkevents-quartz-c-LC765" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * bar (above the content view). The reason is that otherwise</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L766" class="blob-num js-line-number" data-line-number="766"></td>
        <td id="file-gdkevents-quartz-c-LC766" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * gdk gets confused about getting e.g. button presses with no</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L767" class="blob-num js-line-number" data-line-number="767"></td>
        <td id="file-gdkevents-quartz-c-LC767" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * window (the title bar is not known to it).</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L768" class="blob-num js-line-number" data-line-number="768"></td>
        <td id="file-gdkevents-quartz-c-LC768" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L769" class="blob-num js-line-number" data-line-number="769"></td>
        <td id="file-gdkevents-quartz-c-LC769" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (event_type != NSMouseMoved)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L770" class="blob-num js-line-number" data-line-number="770"></td>
        <td id="file-gdkevents-quartz-c-LC770" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (*y &lt; <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L771" class="blob-num js-line-number" data-line-number="771"></td>
        <td id="file-gdkevents-quartz-c-LC771" class="blob-code blob-code-inner js-file-line">          <span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L772" class="blob-num js-line-number" data-line-number="772"></td>
        <td id="file-gdkevents-quartz-c-LC772" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L773" class="blob-num js-line-number" data-line-number="773"></td>
        <td id="file-gdkevents-quartz-c-LC773" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> As for owner events, we need to use the toplevel under the</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L774" class="blob-num js-line-number" data-line-number="774"></td>
        <td id="file-gdkevents-quartz-c-LC774" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * pointer, not the window from the NSEvent.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L775" class="blob-num js-line-number" data-line-number="775"></td>
        <td id="file-gdkevents-quartz-c-LC775" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L776" class="blob-num js-line-number" data-line-number="776"></td>
        <td id="file-gdkevents-quartz-c-LC776" class="blob-code blob-code-inner js-file-line">      toplevel_under_pointer = <span class="pl-c1">find_toplevel_under_pointer</span> (display,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L777" class="blob-num js-line-number" data-line-number="777"></td>
        <td id="file-gdkevents-quartz-c-LC777" class="blob-code blob-code-inner js-file-line">                                                            screen_point,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L778" class="blob-num js-line-number" data-line-number="778"></td>
        <td id="file-gdkevents-quartz-c-LC778" class="blob-code blob-code-inner js-file-line">                                                            &amp;x_tmp, &amp;y_tmp);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L779" class="blob-num js-line-number" data-line-number="779"></td>
        <td id="file-gdkevents-quartz-c-LC779" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (toplevel_under_pointer</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L780" class="blob-num js-line-number" data-line-number="780"></td>
        <td id="file-gdkevents-quartz-c-LC780" class="blob-code blob-code-inner js-file-line">          &amp;&amp; <span class="pl-c1">WINDOW_IS_TOPLEVEL</span> (toplevel_under_pointer))</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L781" class="blob-num js-line-number" data-line-number="781"></td>
        <td id="file-gdkevents-quartz-c-LC781" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L782" class="blob-num js-line-number" data-line-number="782"></td>
        <td id="file-gdkevents-quartz-c-LC782" class="blob-code blob-code-inner js-file-line">          GdkWindowImplQuartz *toplevel_impl;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L783" class="blob-num js-line-number" data-line-number="783"></td>
        <td id="file-gdkevents-quartz-c-LC783" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L784" class="blob-num js-line-number" data-line-number="784"></td>
        <td id="file-gdkevents-quartz-c-LC784" class="blob-code blob-code-inner js-file-line">          toplevel = toplevel_under_pointer;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L785" class="blob-num js-line-number" data-line-number="785"></td>
        <td id="file-gdkevents-quartz-c-LC785" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L786" class="blob-num js-line-number" data-line-number="786"></td>
        <td id="file-gdkevents-quartz-c-LC786" class="blob-code blob-code-inner js-file-line">          toplevel_impl = (GdkWindowImplQuartz *)toplevel-&gt;<span class="pl-smi">impl</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L787" class="blob-num js-line-number" data-line-number="787"></td>
        <td id="file-gdkevents-quartz-c-LC787" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L788" class="blob-num js-line-number" data-line-number="788"></td>
        <td id="file-gdkevents-quartz-c-LC788" class="blob-code blob-code-inner js-file-line">          *x = x_tmp;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L789" class="blob-num js-line-number" data-line-number="789"></td>
        <td id="file-gdkevents-quartz-c-LC789" class="blob-code blob-code-inner js-file-line">          *y = y_tmp;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L790" class="blob-num js-line-number" data-line-number="790"></td>
        <td id="file-gdkevents-quartz-c-LC790" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L791" class="blob-num js-line-number" data-line-number="791"></td>
        <td id="file-gdkevents-quartz-c-LC791" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L792" class="blob-num js-line-number" data-line-number="792"></td>
        <td id="file-gdkevents-quartz-c-LC792" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> toplevel;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L793" class="blob-num js-line-number" data-line-number="793"></td>
        <td id="file-gdkevents-quartz-c-LC793" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L794" class="blob-num js-line-number" data-line-number="794"></td>
        <td id="file-gdkevents-quartz-c-LC794" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L795" class="blob-num js-line-number" data-line-number="795"></td>
        <td id="file-gdkevents-quartz-c-LC795" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L796" class="blob-num js-line-number" data-line-number="796"></td>
        <td id="file-gdkevents-quartz-c-LC796" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L797" class="blob-num js-line-number" data-line-number="797"></td>
        <td id="file-gdkevents-quartz-c-LC797" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L798" class="blob-num js-line-number" data-line-number="798"></td>
        <td id="file-gdkevents-quartz-c-LC798" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> This function finds the correct window to send an event to, taking</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L799" class="blob-num js-line-number" data-line-number="799"></td>
        <td id="file-gdkevents-quartz-c-LC799" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * into account grabs, event propagation, and event masks.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L800" class="blob-num js-line-number" data-line-number="800"></td>
        <td id="file-gdkevents-quartz-c-LC800" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L801" class="blob-num js-line-number" data-line-number="801"></td>
        <td id="file-gdkevents-quartz-c-LC801" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> GdkWindow *</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L802" class="blob-num js-line-number" data-line-number="802"></td>
        <td id="file-gdkevents-quartz-c-LC802" class="blob-code blob-code-inner js-file-line"><span class="pl-en">find_window_for_ns_event</span> (NSEvent *nsevent,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L803" class="blob-num js-line-number" data-line-number="803"></td>
        <td id="file-gdkevents-quartz-c-LC803" class="blob-code blob-code-inner js-file-line">                          gint    *x,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L804" class="blob-num js-line-number" data-line-number="804"></td>
        <td id="file-gdkevents-quartz-c-LC804" class="blob-code blob-code-inner js-file-line">                          gint    *y,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L805" class="blob-num js-line-number" data-line-number="805"></td>
        <td id="file-gdkevents-quartz-c-LC805" class="blob-code blob-code-inner js-file-line">                          gint    *x_root,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L806" class="blob-num js-line-number" data-line-number="806"></td>
        <td id="file-gdkevents-quartz-c-LC806" class="blob-code blob-code-inner js-file-line">                          gint    *y_root)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L807" class="blob-num js-line-number" data-line-number="807"></td>
        <td id="file-gdkevents-quartz-c-LC807" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L808" class="blob-num js-line-number" data-line-number="808"></td>
        <td id="file-gdkevents-quartz-c-LC808" class="blob-code blob-code-inner js-file-line">  GdkQuartzView *view;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L809" class="blob-num js-line-number" data-line-number="809"></td>
        <td id="file-gdkevents-quartz-c-LC809" class="blob-code blob-code-inner js-file-line">  GdkWindow *toplevel;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L810" class="blob-num js-line-number" data-line-number="810"></td>
        <td id="file-gdkevents-quartz-c-LC810" class="blob-code blob-code-inner js-file-line">  NSPoint screen_point;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L811" class="blob-num js-line-number" data-line-number="811"></td>
        <td id="file-gdkevents-quartz-c-LC811" class="blob-code blob-code-inner js-file-line">  NSEventType event_type;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L812" class="blob-num js-line-number" data-line-number="812"></td>
        <td id="file-gdkevents-quartz-c-LC812" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L813" class="blob-num js-line-number" data-line-number="813"></td>
        <td id="file-gdkevents-quartz-c-LC813" class="blob-code blob-code-inner js-file-line">  view = (GdkQuartzView *)[[nsevent window] contentView];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L814" class="blob-num js-line-number" data-line-number="814"></td>
        <td id="file-gdkevents-quartz-c-LC814" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L815" class="blob-num js-line-number" data-line-number="815"></td>
        <td id="file-gdkevents-quartz-c-LC815" class="blob-code blob-code-inner js-file-line">  toplevel = <span class="pl-c1">get_toplevel_from_ns_event</span> (nsevent, &amp;screen_point, x, y);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L816" class="blob-num js-line-number" data-line-number="816"></td>
        <td id="file-gdkevents-quartz-c-LC816" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (!toplevel)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L817" class="blob-num js-line-number" data-line-number="817"></td>
        <td id="file-gdkevents-quartz-c-LC817" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L818" class="blob-num js-line-number" data-line-number="818"></td>
        <td id="file-gdkevents-quartz-c-LC818" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">_gdk_quartz_window_nspoint_to_gdk_xy</span> (screen_point, x_root, y_root);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L819" class="blob-num js-line-number" data-line-number="819"></td>
        <td id="file-gdkevents-quartz-c-LC819" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L820" class="blob-num js-line-number" data-line-number="820"></td>
        <td id="file-gdkevents-quartz-c-LC820" class="blob-code blob-code-inner js-file-line">  event_type = [nsevent type];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L821" class="blob-num js-line-number" data-line-number="821"></td>
        <td id="file-gdkevents-quartz-c-LC821" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L822" class="blob-num js-line-number" data-line-number="822"></td>
        <td id="file-gdkevents-quartz-c-LC822" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">switch</span> (event_type)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L823" class="blob-num js-line-number" data-line-number="823"></td>
        <td id="file-gdkevents-quartz-c-LC823" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L824" class="blob-num js-line-number" data-line-number="824"></td>
        <td id="file-gdkevents-quartz-c-LC824" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSLeftMouseDown:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L825" class="blob-num js-line-number" data-line-number="825"></td>
        <td id="file-gdkevents-quartz-c-LC825" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSRightMouseDown:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L826" class="blob-num js-line-number" data-line-number="826"></td>
        <td id="file-gdkevents-quartz-c-LC826" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSOtherMouseDown:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L827" class="blob-num js-line-number" data-line-number="827"></td>
        <td id="file-gdkevents-quartz-c-LC827" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSLeftMouseUp:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L828" class="blob-num js-line-number" data-line-number="828"></td>
        <td id="file-gdkevents-quartz-c-LC828" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSRightMouseUp:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L829" class="blob-num js-line-number" data-line-number="829"></td>
        <td id="file-gdkevents-quartz-c-LC829" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSOtherMouseUp:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L830" class="blob-num js-line-number" data-line-number="830"></td>
        <td id="file-gdkevents-quartz-c-LC830" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSMouseMoved:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L831" class="blob-num js-line-number" data-line-number="831"></td>
        <td id="file-gdkevents-quartz-c-LC831" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSScrollWheel:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L832" class="blob-num js-line-number" data-line-number="832"></td>
        <td id="file-gdkevents-quartz-c-LC832" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSLeftMouseDragged:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L833" class="blob-num js-line-number" data-line-number="833"></td>
        <td id="file-gdkevents-quartz-c-LC833" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSRightMouseDragged:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L834" class="blob-num js-line-number" data-line-number="834"></td>
        <td id="file-gdkevents-quartz-c-LC834" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSOtherMouseDragged:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L835" class="blob-num js-line-number" data-line-number="835"></td>
        <td id="file-gdkevents-quartz-c-LC835" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSEventTypeMagnify:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L836" class="blob-num js-line-number" data-line-number="836"></td>
        <td id="file-gdkevents-quartz-c-LC836" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSEventTypeRotate:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L837" class="blob-num js-line-number" data-line-number="837"></td>
        <td id="file-gdkevents-quartz-c-LC837" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> <span class="pl-c1">find_toplevel_for_mouse_event</span> (nsevent, x, y);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L838" class="blob-num js-line-number" data-line-number="838"></td>
        <td id="file-gdkevents-quartz-c-LC838" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L839" class="blob-num js-line-number" data-line-number="839"></td>
        <td id="file-gdkevents-quartz-c-LC839" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSMouseEntered:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L840" class="blob-num js-line-number" data-line-number="840"></td>
        <td id="file-gdkevents-quartz-c-LC840" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSMouseExited:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L841" class="blob-num js-line-number" data-line-number="841"></td>
        <td id="file-gdkevents-quartz-c-LC841" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> Only handle our own entered/exited events, not the ones for the</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L842" class="blob-num js-line-number" data-line-number="842"></td>
        <td id="file-gdkevents-quartz-c-LC842" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * titlebar buttons.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L843" class="blob-num js-line-number" data-line-number="843"></td>
        <td id="file-gdkevents-quartz-c-LC843" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L844" class="blob-num js-line-number" data-line-number="844"></td>
        <td id="file-gdkevents-quartz-c-LC844" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> ([view trackingRect] == [nsevent trackingNumber])</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L845" class="blob-num js-line-number" data-line-number="845"></td>
        <td id="file-gdkevents-quartz-c-LC845" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> toplevel;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L846" class="blob-num js-line-number" data-line-number="846"></td>
        <td id="file-gdkevents-quartz-c-LC846" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L847" class="blob-num js-line-number" data-line-number="847"></td>
        <td id="file-gdkevents-quartz-c-LC847" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L848" class="blob-num js-line-number" data-line-number="848"></td>
        <td id="file-gdkevents-quartz-c-LC848" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L849" class="blob-num js-line-number" data-line-number="849"></td>
        <td id="file-gdkevents-quartz-c-LC849" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSKeyDown:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L850" class="blob-num js-line-number" data-line-number="850"></td>
        <td id="file-gdkevents-quartz-c-LC850" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSKeyUp:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L851" class="blob-num js-line-number" data-line-number="851"></td>
        <td id="file-gdkevents-quartz-c-LC851" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSFlagsChanged:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L852" class="blob-num js-line-number" data-line-number="852"></td>
        <td id="file-gdkevents-quartz-c-LC852" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> <span class="pl-c1">find_toplevel_for_keyboard_event</span> (nsevent);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L853" class="blob-num js-line-number" data-line-number="853"></td>
        <td id="file-gdkevents-quartz-c-LC853" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L854" class="blob-num js-line-number" data-line-number="854"></td>
        <td id="file-gdkevents-quartz-c-LC854" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">default</span>:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L855" class="blob-num js-line-number" data-line-number="855"></td>
        <td id="file-gdkevents-quartz-c-LC855" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> Ignore everything else. <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L856" class="blob-num js-line-number" data-line-number="856"></td>
        <td id="file-gdkevents-quartz-c-LC856" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L857" class="blob-num js-line-number" data-line-number="857"></td>
        <td id="file-gdkevents-quartz-c-LC857" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L858" class="blob-num js-line-number" data-line-number="858"></td>
        <td id="file-gdkevents-quartz-c-LC858" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L859" class="blob-num js-line-number" data-line-number="859"></td>
        <td id="file-gdkevents-quartz-c-LC859" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L860" class="blob-num js-line-number" data-line-number="860"></td>
        <td id="file-gdkevents-quartz-c-LC860" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L861" class="blob-num js-line-number" data-line-number="861"></td>
        <td id="file-gdkevents-quartz-c-LC861" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L862" class="blob-num js-line-number" data-line-number="862"></td>
        <td id="file-gdkevents-quartz-c-LC862" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L863" class="blob-num js-line-number" data-line-number="863"></td>
        <td id="file-gdkevents-quartz-c-LC863" class="blob-code blob-code-inner js-file-line"><span class="pl-en">fill_crossing_event</span> (GdkWindow       *toplevel,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L864" class="blob-num js-line-number" data-line-number="864"></td>
        <td id="file-gdkevents-quartz-c-LC864" class="blob-code blob-code-inner js-file-line">                     GdkEvent        *event,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L865" class="blob-num js-line-number" data-line-number="865"></td>
        <td id="file-gdkevents-quartz-c-LC865" class="blob-code blob-code-inner js-file-line">                     NSEvent         *nsevent,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L866" class="blob-num js-line-number" data-line-number="866"></td>
        <td id="file-gdkevents-quartz-c-LC866" class="blob-code blob-code-inner js-file-line">                     gint             x,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L867" class="blob-num js-line-number" data-line-number="867"></td>
        <td id="file-gdkevents-quartz-c-LC867" class="blob-code blob-code-inner js-file-line">                     gint             y,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L868" class="blob-num js-line-number" data-line-number="868"></td>
        <td id="file-gdkevents-quartz-c-LC868" class="blob-code blob-code-inner js-file-line">                     gint             x_root,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L869" class="blob-num js-line-number" data-line-number="869"></td>
        <td id="file-gdkevents-quartz-c-LC869" class="blob-code blob-code-inner js-file-line">                     gint             y_root,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L870" class="blob-num js-line-number" data-line-number="870"></td>
        <td id="file-gdkevents-quartz-c-LC870" class="blob-code blob-code-inner js-file-line">                     GdkEventType     event_type,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L871" class="blob-num js-line-number" data-line-number="871"></td>
        <td id="file-gdkevents-quartz-c-LC871" class="blob-code blob-code-inner js-file-line">                     GdkCrossingMode  mode,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L872" class="blob-num js-line-number" data-line-number="872"></td>
        <td id="file-gdkevents-quartz-c-LC872" class="blob-code blob-code-inner js-file-line">                     GdkNotifyType    detail)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L873" class="blob-num js-line-number" data-line-number="873"></td>
        <td id="file-gdkevents-quartz-c-LC873" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L874" class="blob-num js-line-number" data-line-number="874"></td>
        <td id="file-gdkevents-quartz-c-LC874" class="blob-code blob-code-inner js-file-line">  GdkQuartzDeviceManagerCore *device_manager;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L875" class="blob-num js-line-number" data-line-number="875"></td>
        <td id="file-gdkevents-quartz-c-LC875" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L876" class="blob-num js-line-number" data-line-number="876"></td>
        <td id="file-gdkevents-quartz-c-LC876" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">type</span> = event_type;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L877" class="blob-num js-line-number" data-line-number="877"></td>
        <td id="file-gdkevents-quartz-c-LC877" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">crossing</span>.<span class="pl-smi">window</span> = toplevel;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L878" class="blob-num js-line-number" data-line-number="878"></td>
        <td id="file-gdkevents-quartz-c-LC878" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">crossing</span>.<span class="pl-smi">subwindow</span> = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L879" class="blob-num js-line-number" data-line-number="879"></td>
        <td id="file-gdkevents-quartz-c-LC879" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">crossing</span>.<span class="pl-smi">time</span> = <span class="pl-c1">get_time_from_ns_event</span> (nsevent);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L880" class="blob-num js-line-number" data-line-number="880"></td>
        <td id="file-gdkevents-quartz-c-LC880" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">crossing</span>.<span class="pl-smi">x</span> = x;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L881" class="blob-num js-line-number" data-line-number="881"></td>
        <td id="file-gdkevents-quartz-c-LC881" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">crossing</span>.<span class="pl-smi">y</span> = y;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L882" class="blob-num js-line-number" data-line-number="882"></td>
        <td id="file-gdkevents-quartz-c-LC882" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">crossing</span>.<span class="pl-smi">x_root</span> = x_root;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L883" class="blob-num js-line-number" data-line-number="883"></td>
        <td id="file-gdkevents-quartz-c-LC883" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">crossing</span>.<span class="pl-smi">y_root</span> = y_root;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L884" class="blob-num js-line-number" data-line-number="884"></td>
        <td id="file-gdkevents-quartz-c-LC884" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">crossing</span>.<span class="pl-smi">mode</span> = mode;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L885" class="blob-num js-line-number" data-line-number="885"></td>
        <td id="file-gdkevents-quartz-c-LC885" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">crossing</span>.<span class="pl-smi">detail</span> = detail;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L886" class="blob-num js-line-number" data-line-number="886"></td>
        <td id="file-gdkevents-quartz-c-LC886" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">crossing</span>.<span class="pl-smi">state</span> = <span class="pl-c1">get_keyboard_modifiers_from_ns_event</span> (nsevent) |</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L887" class="blob-num js-line-number" data-line-number="887"></td>
        <td id="file-gdkevents-quartz-c-LC887" class="blob-code blob-code-inner js-file-line">                         <span class="pl-c1">_gdk_quartz_events_get_current_mouse_modifiers</span> ();</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L888" class="blob-num js-line-number" data-line-number="888"></td>
        <td id="file-gdkevents-quartz-c-LC888" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L889" class="blob-num js-line-number" data-line-number="889"></td>
        <td id="file-gdkevents-quartz-c-LC889" class="blob-code blob-code-inner js-file-line">  device_manager = <span class="pl-c1">GDK_QUARTZ_DEVICE_MANAGER_CORE</span> (_gdk_display-&gt;<span class="pl-smi">device_manager</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L890" class="blob-num js-line-number" data-line-number="890"></td>
        <td id="file-gdkevents-quartz-c-LC890" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">gdk_event_set_device</span> (event, device_manager-&gt;<span class="pl-smi">core_pointer</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L891" class="blob-num js-line-number" data-line-number="891"></td>
        <td id="file-gdkevents-quartz-c-LC891" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">gdk_event_set_seat</span> (event, <span class="pl-c1">gdk_device_get_seat</span> (device_manager-&gt;<span class="pl-smi">core_pointer</span>));</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L892" class="blob-num js-line-number" data-line-number="892"></td>
        <td id="file-gdkevents-quartz-c-LC892" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L893" class="blob-num js-line-number" data-line-number="893"></td>
        <td id="file-gdkevents-quartz-c-LC893" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> FIXME: Focus and button state? <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L894" class="blob-num js-line-number" data-line-number="894"></td>
        <td id="file-gdkevents-quartz-c-LC894" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L895" class="blob-num js-line-number" data-line-number="895"></td>
        <td id="file-gdkevents-quartz-c-LC895" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L896" class="blob-num js-line-number" data-line-number="896"></td>
        <td id="file-gdkevents-quartz-c-LC896" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> fill_pinch_event handles the conversion from the two OSX gesture events</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L897" class="blob-num js-line-number" data-line-number="897"></td>
        <td id="file-gdkevents-quartz-c-LC897" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   NSEventTypeMagnfiy and NSEventTypeRotate to the GDK_TOUCHPAD_PINCH event.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L898" class="blob-num js-line-number" data-line-number="898"></td>
        <td id="file-gdkevents-quartz-c-LC898" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   The normal behavior of the OSX events is that they produce as sequence of</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L899" class="blob-num js-line-number" data-line-number="899"></td>
        <td id="file-gdkevents-quartz-c-LC899" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     1 x NSEventPhaseBegan,</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L900" class="blob-num js-line-number" data-line-number="900"></td>
        <td id="file-gdkevents-quartz-c-LC900" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     n x NSEventPhaseChanged,</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L901" class="blob-num js-line-number" data-line-number="901"></td>
        <td id="file-gdkevents-quartz-c-LC901" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     1 x NSEventPhaseEnded</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L902" class="blob-num js-line-number" data-line-number="902"></td>
        <td id="file-gdkevents-quartz-c-LC902" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   This can happen for both the Magnify and the Rotate events independently.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L903" class="blob-num js-line-number" data-line-number="903"></td>
        <td id="file-gdkevents-quartz-c-LC903" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   As both events are summarized in one GDK_TOUCHPAD_PINCH event sequence, a</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L904" class="blob-num js-line-number" data-line-number="904"></td>
        <td id="file-gdkevents-quartz-c-LC904" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   little state machine handles the case of two NSEventPhaseBegan events in</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L905" class="blob-num js-line-number" data-line-number="905"></td>
        <td id="file-gdkevents-quartz-c-LC905" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   a sequence, e.g. Magnify(Began), Magnify(Changed)..., Rotate(Began)...</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L906" class="blob-num js-line-number" data-line-number="906"></td>
        <td id="file-gdkevents-quartz-c-LC906" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   such that PINCH(STARTED), PINCH(UPDATE).... will not show a second</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L907" class="blob-num js-line-number" data-line-number="907"></td>
        <td id="file-gdkevents-quartz-c-LC907" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   PINCH(STARTED) event.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L908" class="blob-num js-line-number" data-line-number="908"></td>
        <td id="file-gdkevents-quartz-c-LC908" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L909" class="blob-num js-line-number" data-line-number="909"></td>
        <td id="file-gdkevents-quartz-c-LC909" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> AVAILABLE_MAC_OS_X_VERSION_10_8_AND_LATER</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L910" class="blob-num js-line-number" data-line-number="910"></td>
        <td id="file-gdkevents-quartz-c-LC910" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L911" class="blob-num js-line-number" data-line-number="911"></td>
        <td id="file-gdkevents-quartz-c-LC911" class="blob-code blob-code-inner js-file-line"><span class="pl-en">fill_pinch_event</span> (GdkWindow *window,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L912" class="blob-num js-line-number" data-line-number="912"></td>
        <td id="file-gdkevents-quartz-c-LC912" class="blob-code blob-code-inner js-file-line">                  GdkEvent  *event,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L913" class="blob-num js-line-number" data-line-number="913"></td>
        <td id="file-gdkevents-quartz-c-LC913" class="blob-code blob-code-inner js-file-line">                  NSEvent   *nsevent,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L914" class="blob-num js-line-number" data-line-number="914"></td>
        <td id="file-gdkevents-quartz-c-LC914" class="blob-code blob-code-inner js-file-line">                  gint       x,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L915" class="blob-num js-line-number" data-line-number="915"></td>
        <td id="file-gdkevents-quartz-c-LC915" class="blob-code blob-code-inner js-file-line">                  gint       y,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L916" class="blob-num js-line-number" data-line-number="916"></td>
        <td id="file-gdkevents-quartz-c-LC916" class="blob-code blob-code-inner js-file-line">                  gint       x_root,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L917" class="blob-num js-line-number" data-line-number="917"></td>
        <td id="file-gdkevents-quartz-c-LC917" class="blob-code blob-code-inner js-file-line">                  gint       y_root)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L918" class="blob-num js-line-number" data-line-number="918"></td>
        <td id="file-gdkevents-quartz-c-LC918" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L919" class="blob-num js-line-number" data-line-number="919"></td>
        <td id="file-gdkevents-quartz-c-LC919" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">static</span> <span class="pl-k">double</span> last_scale = <span class="pl-c1">1.0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L920" class="blob-num js-line-number" data-line-number="920"></td>
        <td id="file-gdkevents-quartz-c-LC920" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">static</span> <span class="pl-k">enum</span> {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L921" class="blob-num js-line-number" data-line-number="921"></td>
        <td id="file-gdkevents-quartz-c-LC921" class="blob-code blob-code-inner js-file-line">    FP_STATE_IDLE,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L922" class="blob-num js-line-number" data-line-number="922"></td>
        <td id="file-gdkevents-quartz-c-LC922" class="blob-code blob-code-inner js-file-line">    FP_STATE_UPDATE</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L923" class="blob-num js-line-number" data-line-number="923"></td>
        <td id="file-gdkevents-quartz-c-LC923" class="blob-code blob-code-inner js-file-line">  } last_state = FP_STATE_IDLE;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L924" class="blob-num js-line-number" data-line-number="924"></td>
        <td id="file-gdkevents-quartz-c-LC924" class="blob-code blob-code-inner js-file-line">  GdkQuartzDeviceManagerCore *device_manager;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L925" class="blob-num js-line-number" data-line-number="925"></td>
        <td id="file-gdkevents-quartz-c-LC925" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L926" class="blob-num js-line-number" data-line-number="926"></td>
        <td id="file-gdkevents-quartz-c-LC926" class="blob-code blob-code-inner js-file-line">  device_manager = <span class="pl-c1">GDK_QUARTZ_DEVICE_MANAGER_CORE</span> (_gdk_display-&gt;<span class="pl-smi">device_manager</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L927" class="blob-num js-line-number" data-line-number="927"></td>
        <td id="file-gdkevents-quartz-c-LC927" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L928" class="blob-num js-line-number" data-line-number="928"></td>
        <td id="file-gdkevents-quartz-c-LC928" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">type</span> = GDK_TOUCHPAD_PINCH;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L929" class="blob-num js-line-number" data-line-number="929"></td>
        <td id="file-gdkevents-quartz-c-LC929" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">touchpad_pinch</span>.<span class="pl-smi">window</span> = window;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L930" class="blob-num js-line-number" data-line-number="930"></td>
        <td id="file-gdkevents-quartz-c-LC930" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">touchpad_pinch</span>.<span class="pl-smi">time</span> = <span class="pl-c1">get_time_from_ns_event</span> (nsevent);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L931" class="blob-num js-line-number" data-line-number="931"></td>
        <td id="file-gdkevents-quartz-c-LC931" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">touchpad_pinch</span>.<span class="pl-smi">x</span> = x;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L932" class="blob-num js-line-number" data-line-number="932"></td>
        <td id="file-gdkevents-quartz-c-LC932" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">touchpad_pinch</span>.<span class="pl-smi">y</span> = y;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L933" class="blob-num js-line-number" data-line-number="933"></td>
        <td id="file-gdkevents-quartz-c-LC933" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">touchpad_pinch</span>.<span class="pl-smi">x_root</span> = x_root;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L934" class="blob-num js-line-number" data-line-number="934"></td>
        <td id="file-gdkevents-quartz-c-LC934" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">touchpad_pinch</span>.<span class="pl-smi">y_root</span> = y_root;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L935" class="blob-num js-line-number" data-line-number="935"></td>
        <td id="file-gdkevents-quartz-c-LC935" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">touchpad_pinch</span>.<span class="pl-smi">state</span> = <span class="pl-c1">get_keyboard_modifiers_from_ns_event</span> (nsevent);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L936" class="blob-num js-line-number" data-line-number="936"></td>
        <td id="file-gdkevents-quartz-c-LC936" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">touchpad_pinch</span>.<span class="pl-smi">n_fingers</span> = <span class="pl-c1">2</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L937" class="blob-num js-line-number" data-line-number="937"></td>
        <td id="file-gdkevents-quartz-c-LC937" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">touchpad_pinch</span>.<span class="pl-smi">dx</span> = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L938" class="blob-num js-line-number" data-line-number="938"></td>
        <td id="file-gdkevents-quartz-c-LC938" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">touchpad_pinch</span>.<span class="pl-smi">dy</span> = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L939" class="blob-num js-line-number" data-line-number="939"></td>
        <td id="file-gdkevents-quartz-c-LC939" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">gdk_event_set_device</span> (event, device_manager-&gt;<span class="pl-smi">core_pointer</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L940" class="blob-num js-line-number" data-line-number="940"></td>
        <td id="file-gdkevents-quartz-c-LC940" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L941" class="blob-num js-line-number" data-line-number="941"></td>
        <td id="file-gdkevents-quartz-c-LC941" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">switch</span> ([nsevent phase])</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L942" class="blob-num js-line-number" data-line-number="942"></td>
        <td id="file-gdkevents-quartz-c-LC942" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L943" class="blob-num js-line-number" data-line-number="943"></td>
        <td id="file-gdkevents-quartz-c-LC943" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSEventPhaseBegan:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L944" class="blob-num js-line-number" data-line-number="944"></td>
        <td id="file-gdkevents-quartz-c-LC944" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">switch</span> (last_state)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L945" class="blob-num js-line-number" data-line-number="945"></td>
        <td id="file-gdkevents-quartz-c-LC945" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L946" class="blob-num js-line-number" data-line-number="946"></td>
        <td id="file-gdkevents-quartz-c-LC946" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> FP_STATE_IDLE:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L947" class="blob-num js-line-number" data-line-number="947"></td>
        <td id="file-gdkevents-quartz-c-LC947" class="blob-code blob-code-inner js-file-line">          event-&gt;<span class="pl-smi">touchpad_pinch</span>.<span class="pl-smi">phase</span> = GDK_TOUCHPAD_GESTURE_PHASE_BEGIN;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L948" class="blob-num js-line-number" data-line-number="948"></td>
        <td id="file-gdkevents-quartz-c-LC948" class="blob-code blob-code-inner js-file-line">          last_state = FP_STATE_UPDATE;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L949" class="blob-num js-line-number" data-line-number="949"></td>
        <td id="file-gdkevents-quartz-c-LC949" class="blob-code blob-code-inner js-file-line">          last_scale = <span class="pl-c1">1.0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L950" class="blob-num js-line-number" data-line-number="950"></td>
        <td id="file-gdkevents-quartz-c-LC950" class="blob-code blob-code-inner js-file-line">          <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L951" class="blob-num js-line-number" data-line-number="951"></td>
        <td id="file-gdkevents-quartz-c-LC951" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> FP_STATE_UPDATE:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L952" class="blob-num js-line-number" data-line-number="952"></td>
        <td id="file-gdkevents-quartz-c-LC952" class="blob-code blob-code-inner js-file-line">          <span class="pl-c"><span class="pl-c">/*</span> We have already received a PhaseBegan event but no PhaseEnded</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L953" class="blob-num js-line-number" data-line-number="953"></td>
        <td id="file-gdkevents-quartz-c-LC953" class="blob-code blob-code-inner js-file-line"><span class="pl-c">             event. This can happen, e.g. Magnify(Began), Magnify(Change)...</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L954" class="blob-num js-line-number" data-line-number="954"></td>
        <td id="file-gdkevents-quartz-c-LC954" class="blob-code blob-code-inner js-file-line"><span class="pl-c">             Rotate(Began), Rotate (Change),...., Magnify(End) Rotate(End)</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L955" class="blob-num js-line-number" data-line-number="955"></td>
        <td id="file-gdkevents-quartz-c-LC955" class="blob-code blob-code-inner js-file-line"><span class="pl-c">          <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L956" class="blob-num js-line-number" data-line-number="956"></td>
        <td id="file-gdkevents-quartz-c-LC956" class="blob-code blob-code-inner js-file-line">          event-&gt;<span class="pl-smi">touchpad_pinch</span>.<span class="pl-smi">phase</span> = GDK_TOUCHPAD_GESTURE_PHASE_UPDATE;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L957" class="blob-num js-line-number" data-line-number="957"></td>
        <td id="file-gdkevents-quartz-c-LC957" class="blob-code blob-code-inner js-file-line">          <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L958" class="blob-num js-line-number" data-line-number="958"></td>
        <td id="file-gdkevents-quartz-c-LC958" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L959" class="blob-num js-line-number" data-line-number="959"></td>
        <td id="file-gdkevents-quartz-c-LC959" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L960" class="blob-num js-line-number" data-line-number="960"></td>
        <td id="file-gdkevents-quartz-c-LC960" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSEventPhaseChanged:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L961" class="blob-num js-line-number" data-line-number="961"></td>
        <td id="file-gdkevents-quartz-c-LC961" class="blob-code blob-code-inner js-file-line">      event-&gt;<span class="pl-smi">touchpad_pinch</span>.<span class="pl-smi">phase</span> = GDK_TOUCHPAD_GESTURE_PHASE_UPDATE;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L962" class="blob-num js-line-number" data-line-number="962"></td>
        <td id="file-gdkevents-quartz-c-LC962" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L963" class="blob-num js-line-number" data-line-number="963"></td>
        <td id="file-gdkevents-quartz-c-LC963" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSEventPhaseEnded:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L964" class="blob-num js-line-number" data-line-number="964"></td>
        <td id="file-gdkevents-quartz-c-LC964" class="blob-code blob-code-inner js-file-line">      event-&gt;<span class="pl-smi">touchpad_pinch</span>.<span class="pl-smi">phase</span> = GDK_TOUCHPAD_GESTURE_PHASE_END;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L965" class="blob-num js-line-number" data-line-number="965"></td>
        <td id="file-gdkevents-quartz-c-LC965" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">switch</span> (last_state)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L966" class="blob-num js-line-number" data-line-number="966"></td>
        <td id="file-gdkevents-quartz-c-LC966" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L967" class="blob-num js-line-number" data-line-number="967"></td>
        <td id="file-gdkevents-quartz-c-LC967" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> FP_STATE_IDLE:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L968" class="blob-num js-line-number" data-line-number="968"></td>
        <td id="file-gdkevents-quartz-c-LC968" class="blob-code blob-code-inner js-file-line">          <span class="pl-c"><span class="pl-c">/*</span> We are idle but have received a second PhaseEnded event.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L969" class="blob-num js-line-number" data-line-number="969"></td>
        <td id="file-gdkevents-quartz-c-LC969" class="blob-code blob-code-inner js-file-line"><span class="pl-c">             This can happen because we have Magnify and Rotate OSX</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L970" class="blob-num js-line-number" data-line-number="970"></td>
        <td id="file-gdkevents-quartz-c-LC970" class="blob-code blob-code-inner js-file-line"><span class="pl-c">             event sequences. We just send a second end GDK_PHASE_END.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L971" class="blob-num js-line-number" data-line-number="971"></td>
        <td id="file-gdkevents-quartz-c-LC971" class="blob-code blob-code-inner js-file-line"><span class="pl-c">          <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L972" class="blob-num js-line-number" data-line-number="972"></td>
        <td id="file-gdkevents-quartz-c-LC972" class="blob-code blob-code-inner js-file-line">          <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L973" class="blob-num js-line-number" data-line-number="973"></td>
        <td id="file-gdkevents-quartz-c-LC973" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> FP_STATE_UPDATE:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L974" class="blob-num js-line-number" data-line-number="974"></td>
        <td id="file-gdkevents-quartz-c-LC974" class="blob-code blob-code-inner js-file-line">          last_state = FP_STATE_IDLE;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L975" class="blob-num js-line-number" data-line-number="975"></td>
        <td id="file-gdkevents-quartz-c-LC975" class="blob-code blob-code-inner js-file-line">          <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L976" class="blob-num js-line-number" data-line-number="976"></td>
        <td id="file-gdkevents-quartz-c-LC976" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L977" class="blob-num js-line-number" data-line-number="977"></td>
        <td id="file-gdkevents-quartz-c-LC977" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L978" class="blob-num js-line-number" data-line-number="978"></td>
        <td id="file-gdkevents-quartz-c-LC978" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSEventPhaseCancelled:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L979" class="blob-num js-line-number" data-line-number="979"></td>
        <td id="file-gdkevents-quartz-c-LC979" class="blob-code blob-code-inner js-file-line">      event-&gt;<span class="pl-smi">touchpad_pinch</span>.<span class="pl-smi">phase</span> = GDK_TOUCHPAD_GESTURE_PHASE_CANCEL;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L980" class="blob-num js-line-number" data-line-number="980"></td>
        <td id="file-gdkevents-quartz-c-LC980" class="blob-code blob-code-inner js-file-line">      last_state = FP_STATE_IDLE;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L981" class="blob-num js-line-number" data-line-number="981"></td>
        <td id="file-gdkevents-quartz-c-LC981" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L982" class="blob-num js-line-number" data-line-number="982"></td>
        <td id="file-gdkevents-quartz-c-LC982" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSEventPhaseMayBegin:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L983" class="blob-num js-line-number" data-line-number="983"></td>
        <td id="file-gdkevents-quartz-c-LC983" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSEventPhaseStationary:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L984" class="blob-num js-line-number" data-line-number="984"></td>
        <td id="file-gdkevents-quartz-c-LC984" class="blob-code blob-code-inner js-file-line">      event-&gt;<span class="pl-smi">touchpad_pinch</span>.<span class="pl-smi">phase</span> = GDK_TOUCHPAD_GESTURE_PHASE_CANCEL;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L985" class="blob-num js-line-number" data-line-number="985"></td>
        <td id="file-gdkevents-quartz-c-LC985" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L986" class="blob-num js-line-number" data-line-number="986"></td>
        <td id="file-gdkevents-quartz-c-LC986" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">default</span>:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L987" class="blob-num js-line-number" data-line-number="987"></td>
        <td id="file-gdkevents-quartz-c-LC987" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">g_assert_not_reached</span> ();</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L988" class="blob-num js-line-number" data-line-number="988"></td>
        <td id="file-gdkevents-quartz-c-LC988" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L989" class="blob-num js-line-number" data-line-number="989"></td>
        <td id="file-gdkevents-quartz-c-LC989" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L990" class="blob-num js-line-number" data-line-number="990"></td>
        <td id="file-gdkevents-quartz-c-LC990" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L991" class="blob-num js-line-number" data-line-number="991"></td>
        <td id="file-gdkevents-quartz-c-LC991" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">switch</span> ([nsevent type])</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L992" class="blob-num js-line-number" data-line-number="992"></td>
        <td id="file-gdkevents-quartz-c-LC992" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L993" class="blob-num js-line-number" data-line-number="993"></td>
        <td id="file-gdkevents-quartz-c-LC993" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSEventTypeMagnify:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L994" class="blob-num js-line-number" data-line-number="994"></td>
        <td id="file-gdkevents-quartz-c-LC994" class="blob-code blob-code-inner js-file-line">      last_scale *= [nsevent magnification] + <span class="pl-c1">1.0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L995" class="blob-num js-line-number" data-line-number="995"></td>
        <td id="file-gdkevents-quartz-c-LC995" class="blob-code blob-code-inner js-file-line">      event-&gt;<span class="pl-smi">touchpad_pinch</span>.<span class="pl-smi">angle_delta</span> = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L996" class="blob-num js-line-number" data-line-number="996"></td>
        <td id="file-gdkevents-quartz-c-LC996" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L997" class="blob-num js-line-number" data-line-number="997"></td>
        <td id="file-gdkevents-quartz-c-LC997" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSEventTypeRotate:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L998" class="blob-num js-line-number" data-line-number="998"></td>
        <td id="file-gdkevents-quartz-c-LC998" class="blob-code blob-code-inner js-file-line">      event-&gt;<span class="pl-smi">touchpad_pinch</span>.<span class="pl-smi">angle_delta</span> = - [nsevent rotation] * G_PI / <span class="pl-c1">180.0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L999" class="blob-num js-line-number" data-line-number="999"></td>
        <td id="file-gdkevents-quartz-c-LC999" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1000" class="blob-num js-line-number" data-line-number="1000"></td>
        <td id="file-gdkevents-quartz-c-LC1000" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">default</span>:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1001" class="blob-num js-line-number" data-line-number="1001"></td>
        <td id="file-gdkevents-quartz-c-LC1001" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">g_assert_not_reached</span> ();</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1002" class="blob-num js-line-number" data-line-number="1002"></td>
        <td id="file-gdkevents-quartz-c-LC1002" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1003" class="blob-num js-line-number" data-line-number="1003"></td>
        <td id="file-gdkevents-quartz-c-LC1003" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">touchpad_pinch</span>.<span class="pl-smi">scale</span> = last_scale;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1004" class="blob-num js-line-number" data-line-number="1004"></td>
        <td id="file-gdkevents-quartz-c-LC1004" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1005" class="blob-num js-line-number" data-line-number="1005"></td>
        <td id="file-gdkevents-quartz-c-LC1005" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span> <span class="pl-c"><span class="pl-c">/*</span> OSX Version &gt;= 10.8 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1006" class="blob-num js-line-number" data-line-number="1006"></td>
        <td id="file-gdkevents-quartz-c-LC1006" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1007" class="blob-num js-line-number" data-line-number="1007"></td>
        <td id="file-gdkevents-quartz-c-LC1007" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1008" class="blob-num js-line-number" data-line-number="1008"></td>
        <td id="file-gdkevents-quartz-c-LC1008" class="blob-code blob-code-inner js-file-line"><span class="pl-en">fill_button_event</span> (GdkWindow *window,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1009" class="blob-num js-line-number" data-line-number="1009"></td>
        <td id="file-gdkevents-quartz-c-LC1009" class="blob-code blob-code-inner js-file-line">                   GdkEvent  *event,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1010" class="blob-num js-line-number" data-line-number="1010"></td>
        <td id="file-gdkevents-quartz-c-LC1010" class="blob-code blob-code-inner js-file-line">                   NSEvent   *nsevent,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1011" class="blob-num js-line-number" data-line-number="1011"></td>
        <td id="file-gdkevents-quartz-c-LC1011" class="blob-code blob-code-inner js-file-line">                   gint       x,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1012" class="blob-num js-line-number" data-line-number="1012"></td>
        <td id="file-gdkevents-quartz-c-LC1012" class="blob-code blob-code-inner js-file-line">                   gint       y,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1013" class="blob-num js-line-number" data-line-number="1013"></td>
        <td id="file-gdkevents-quartz-c-LC1013" class="blob-code blob-code-inner js-file-line">                   gint       x_root,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1014" class="blob-num js-line-number" data-line-number="1014"></td>
        <td id="file-gdkevents-quartz-c-LC1014" class="blob-code blob-code-inner js-file-line">                   gint       y_root)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1015" class="blob-num js-line-number" data-line-number="1015"></td>
        <td id="file-gdkevents-quartz-c-LC1015" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1016" class="blob-num js-line-number" data-line-number="1016"></td>
        <td id="file-gdkevents-quartz-c-LC1016" class="blob-code blob-code-inner js-file-line">  GdkEventType type;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1017" class="blob-num js-line-number" data-line-number="1017"></td>
        <td id="file-gdkevents-quartz-c-LC1017" class="blob-code blob-code-inner js-file-line">  GdkDevice *event_device = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1018" class="blob-num js-line-number" data-line-number="1018"></td>
        <td id="file-gdkevents-quartz-c-LC1018" class="blob-code blob-code-inner js-file-line">  gdouble *axes = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1019" class="blob-num js-line-number" data-line-number="1019"></td>
        <td id="file-gdkevents-quartz-c-LC1019" class="blob-code blob-code-inner js-file-line">  gint state;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1020" class="blob-num js-line-number" data-line-number="1020"></td>
        <td id="file-gdkevents-quartz-c-LC1020" class="blob-code blob-code-inner js-file-line">  GdkQuartzDeviceManagerCore *device_manager;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1021" class="blob-num js-line-number" data-line-number="1021"></td>
        <td id="file-gdkevents-quartz-c-LC1021" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1022" class="blob-num js-line-number" data-line-number="1022"></td>
        <td id="file-gdkevents-quartz-c-LC1022" class="blob-code blob-code-inner js-file-line">  state = <span class="pl-c1">get_keyboard_modifiers_from_ns_event</span> (nsevent) |</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1023" class="blob-num js-line-number" data-line-number="1023"></td>
        <td id="file-gdkevents-quartz-c-LC1023" class="blob-code blob-code-inner js-file-line">         <span class="pl-c1">_gdk_quartz_events_get_current_mouse_modifiers</span> ();</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1024" class="blob-num js-line-number" data-line-number="1024"></td>
        <td id="file-gdkevents-quartz-c-LC1024" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1025" class="blob-num js-line-number" data-line-number="1025"></td>
        <td id="file-gdkevents-quartz-c-LC1025" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">switch</span> ([nsevent type])</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1026" class="blob-num js-line-number" data-line-number="1026"></td>
        <td id="file-gdkevents-quartz-c-LC1026" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1027" class="blob-num js-line-number" data-line-number="1027"></td>
        <td id="file-gdkevents-quartz-c-LC1027" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSLeftMouseDown:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1028" class="blob-num js-line-number" data-line-number="1028"></td>
        <td id="file-gdkevents-quartz-c-LC1028" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSRightMouseDown:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1029" class="blob-num js-line-number" data-line-number="1029"></td>
        <td id="file-gdkevents-quartz-c-LC1029" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSOtherMouseDown:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1030" class="blob-num js-line-number" data-line-number="1030"></td>
        <td id="file-gdkevents-quartz-c-LC1030" class="blob-code blob-code-inner js-file-line">      type = GDK_BUTTON_PRESS;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1031" class="blob-num js-line-number" data-line-number="1031"></td>
        <td id="file-gdkevents-quartz-c-LC1031" class="blob-code blob-code-inner js-file-line">      state &amp;= ~<span class="pl-c1">get_mouse_button_modifiers_from_ns_event</span> (nsevent);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1032" class="blob-num js-line-number" data-line-number="1032"></td>
        <td id="file-gdkevents-quartz-c-LC1032" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1033" class="blob-num js-line-number" data-line-number="1033"></td>
        <td id="file-gdkevents-quartz-c-LC1033" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1034" class="blob-num js-line-number" data-line-number="1034"></td>
        <td id="file-gdkevents-quartz-c-LC1034" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSLeftMouseUp:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1035" class="blob-num js-line-number" data-line-number="1035"></td>
        <td id="file-gdkevents-quartz-c-LC1035" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSRightMouseUp:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1036" class="blob-num js-line-number" data-line-number="1036"></td>
        <td id="file-gdkevents-quartz-c-LC1036" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSOtherMouseUp:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1037" class="blob-num js-line-number" data-line-number="1037"></td>
        <td id="file-gdkevents-quartz-c-LC1037" class="blob-code blob-code-inner js-file-line">      type = GDK_BUTTON_RELEASE;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1038" class="blob-num js-line-number" data-line-number="1038"></td>
        <td id="file-gdkevents-quartz-c-LC1038" class="blob-code blob-code-inner js-file-line">      state |= <span class="pl-c1">get_mouse_button_modifiers_from_ns_event</span> (nsevent);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1039" class="blob-num js-line-number" data-line-number="1039"></td>
        <td id="file-gdkevents-quartz-c-LC1039" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1040" class="blob-num js-line-number" data-line-number="1040"></td>
        <td id="file-gdkevents-quartz-c-LC1040" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1041" class="blob-num js-line-number" data-line-number="1041"></td>
        <td id="file-gdkevents-quartz-c-LC1041" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">default</span>:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1042" class="blob-num js-line-number" data-line-number="1042"></td>
        <td id="file-gdkevents-quartz-c-LC1042" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">g_assert_not_reached</span> ();</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1043" class="blob-num js-line-number" data-line-number="1043"></td>
        <td id="file-gdkevents-quartz-c-LC1043" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1044" class="blob-num js-line-number" data-line-number="1044"></td>
        <td id="file-gdkevents-quartz-c-LC1044" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1045" class="blob-num js-line-number" data-line-number="1045"></td>
        <td id="file-gdkevents-quartz-c-LC1045" class="blob-code blob-code-inner js-file-line">  event_device = _gdk_quartz_device_manager_core_device_for_ns_event</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1046" class="blob-num js-line-number" data-line-number="1046"></td>
        <td id="file-gdkevents-quartz-c-LC1046" class="blob-code blob-code-inner js-file-line">                   (</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1047" class="blob-num js-line-number" data-line-number="1047"></td>
        <td id="file-gdkevents-quartz-c-LC1047" class="blob-code blob-code-inner js-file-line">                     <span class="pl-c1">gdk_display_get_device_manager</span> (_gdk_display),</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1048" class="blob-num js-line-number" data-line-number="1048"></td>
        <td id="file-gdkevents-quartz-c-LC1048" class="blob-code blob-code-inner js-file-line">                     nsevent</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1049" class="blob-num js-line-number" data-line-number="1049"></td>
        <td id="file-gdkevents-quartz-c-LC1049" class="blob-code blob-code-inner js-file-line">                   );</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1050" class="blob-num js-line-number" data-line-number="1050"></td>
        <td id="file-gdkevents-quartz-c-LC1050" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1051" class="blob-num js-line-number" data-line-number="1051"></td>
        <td id="file-gdkevents-quartz-c-LC1051" class="blob-code blob-code-inner js-file-line">  device_manager = <span class="pl-c1">GDK_QUARTZ_DEVICE_MANAGER_CORE</span> (_gdk_display-&gt;<span class="pl-smi">device_manager</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1052" class="blob-num js-line-number" data-line-number="1052"></td>
        <td id="file-gdkevents-quartz-c-LC1052" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1053" class="blob-num js-line-number" data-line-number="1053"></td>
        <td id="file-gdkevents-quartz-c-LC1053" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (device_manager-&gt;<span class="pl-smi">core_pointer</span> != event_device)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1054" class="blob-num js-line-number" data-line-number="1054"></td>
        <td id="file-gdkevents-quartz-c-LC1054" class="blob-code blob-code-inner js-file-line">  {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1055" class="blob-num js-line-number" data-line-number="1055"></td>
        <td id="file-gdkevents-quartz-c-LC1055" class="blob-code blob-code-inner js-file-line">    axes = <span class="pl-c1">g_malloc_n</span> (<span class="pl-c1">5</span>, <span class="pl-k">sizeof</span> (gdouble));</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1056" class="blob-num js-line-number" data-line-number="1056"></td>
        <td id="file-gdkevents-quartz-c-LC1056" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1057" class="blob-num js-line-number" data-line-number="1057"></td>
        <td id="file-gdkevents-quartz-c-LC1057" class="blob-code blob-code-inner js-file-line">    axes[<span class="pl-c1">0</span>] = x;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1058" class="blob-num js-line-number" data-line-number="1058"></td>
        <td id="file-gdkevents-quartz-c-LC1058" class="blob-code blob-code-inner js-file-line">    axes[<span class="pl-c1">1</span>] = y;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1059" class="blob-num js-line-number" data-line-number="1059"></td>
        <td id="file-gdkevents-quartz-c-LC1059" class="blob-code blob-code-inner js-file-line">    axes[<span class="pl-c1">2</span>] = [nsevent pressure];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1060" class="blob-num js-line-number" data-line-number="1060"></td>
        <td id="file-gdkevents-quartz-c-LC1060" class="blob-code blob-code-inner js-file-line">    axes[<span class="pl-c1">3</span>] = [nsevent tilt].<span class="pl-smi">x</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1061" class="blob-num js-line-number" data-line-number="1061"></td>
        <td id="file-gdkevents-quartz-c-LC1061" class="blob-code blob-code-inner js-file-line">    axes[<span class="pl-c1">4</span>] = [nsevent tilt].<span class="pl-smi">y</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1062" class="blob-num js-line-number" data-line-number="1062"></td>
        <td id="file-gdkevents-quartz-c-LC1062" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1063" class="blob-num js-line-number" data-line-number="1063"></td>
        <td id="file-gdkevents-quartz-c-LC1063" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1064" class="blob-num js-line-number" data-line-number="1064"></td>
        <td id="file-gdkevents-quartz-c-LC1064" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">type</span> = type;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1065" class="blob-num js-line-number" data-line-number="1065"></td>
        <td id="file-gdkevents-quartz-c-LC1065" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">button</span>.<span class="pl-smi">window</span> = window;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1066" class="blob-num js-line-number" data-line-number="1066"></td>
        <td id="file-gdkevents-quartz-c-LC1066" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">button</span>.<span class="pl-smi">time</span> = <span class="pl-c1">get_time_from_ns_event</span> (nsevent);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1067" class="blob-num js-line-number" data-line-number="1067"></td>
        <td id="file-gdkevents-quartz-c-LC1067" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">button</span>.<span class="pl-smi">x</span> = x;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1068" class="blob-num js-line-number" data-line-number="1068"></td>
        <td id="file-gdkevents-quartz-c-LC1068" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">button</span>.<span class="pl-smi">y</span> = y;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1069" class="blob-num js-line-number" data-line-number="1069"></td>
        <td id="file-gdkevents-quartz-c-LC1069" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">button</span>.<span class="pl-smi">x_root</span> = x_root;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1070" class="blob-num js-line-number" data-line-number="1070"></td>
        <td id="file-gdkevents-quartz-c-LC1070" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">button</span>.<span class="pl-smi">y_root</span> = y_root;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1071" class="blob-num js-line-number" data-line-number="1071"></td>
        <td id="file-gdkevents-quartz-c-LC1071" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">button</span>.<span class="pl-smi">axes</span> = axes;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1072" class="blob-num js-line-number" data-line-number="1072"></td>
        <td id="file-gdkevents-quartz-c-LC1072" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">button</span>.<span class="pl-smi">state</span> = state;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1073" class="blob-num js-line-number" data-line-number="1073"></td>
        <td id="file-gdkevents-quartz-c-LC1073" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">button</span>.<span class="pl-smi">button</span> = <span class="pl-c1">get_mouse_button_from_ns_event</span> (nsevent);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1074" class="blob-num js-line-number" data-line-number="1074"></td>
        <td id="file-gdkevents-quartz-c-LC1074" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">button</span>.<span class="pl-smi">device</span> = device_manager-&gt;<span class="pl-smi">core_pointer</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1075" class="blob-num js-line-number" data-line-number="1075"></td>
        <td id="file-gdkevents-quartz-c-LC1075" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">gdk_event_set_seat</span> (event, <span class="pl-c1">gdk_device_get_seat</span> (device_manager-&gt;<span class="pl-smi">core_pointer</span>));</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1076" class="blob-num js-line-number" data-line-number="1076"></td>
        <td id="file-gdkevents-quartz-c-LC1076" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">gdk_event_set_source_device</span>(event, event_device);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1077" class="blob-num js-line-number" data-line-number="1077"></td>
        <td id="file-gdkevents-quartz-c-LC1077" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1078" class="blob-num js-line-number" data-line-number="1078"></td>
        <td id="file-gdkevents-quartz-c-LC1078" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1079" class="blob-num js-line-number" data-line-number="1079"></td>
        <td id="file-gdkevents-quartz-c-LC1079" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1080" class="blob-num js-line-number" data-line-number="1080"></td>
        <td id="file-gdkevents-quartz-c-LC1080" class="blob-code blob-code-inner js-file-line"><span class="pl-en">fill_motion_event</span> (GdkWindow *window,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1081" class="blob-num js-line-number" data-line-number="1081"></td>
        <td id="file-gdkevents-quartz-c-LC1081" class="blob-code blob-code-inner js-file-line">                   GdkEvent  *event,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1082" class="blob-num js-line-number" data-line-number="1082"></td>
        <td id="file-gdkevents-quartz-c-LC1082" class="blob-code blob-code-inner js-file-line">                   NSEvent   *nsevent,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1083" class="blob-num js-line-number" data-line-number="1083"></td>
        <td id="file-gdkevents-quartz-c-LC1083" class="blob-code blob-code-inner js-file-line">                   gint       x,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1084" class="blob-num js-line-number" data-line-number="1084"></td>
        <td id="file-gdkevents-quartz-c-LC1084" class="blob-code blob-code-inner js-file-line">                   gint       y,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1085" class="blob-num js-line-number" data-line-number="1085"></td>
        <td id="file-gdkevents-quartz-c-LC1085" class="blob-code blob-code-inner js-file-line">                   gint       x_root,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1086" class="blob-num js-line-number" data-line-number="1086"></td>
        <td id="file-gdkevents-quartz-c-LC1086" class="blob-code blob-code-inner js-file-line">                   gint       y_root)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1087" class="blob-num js-line-number" data-line-number="1087"></td>
        <td id="file-gdkevents-quartz-c-LC1087" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1088" class="blob-num js-line-number" data-line-number="1088"></td>
        <td id="file-gdkevents-quartz-c-LC1088" class="blob-code blob-code-inner js-file-line">  GdkQuartzDeviceManagerCore *device_manager;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1089" class="blob-num js-line-number" data-line-number="1089"></td>
        <td id="file-gdkevents-quartz-c-LC1089" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1090" class="blob-num js-line-number" data-line-number="1090"></td>
        <td id="file-gdkevents-quartz-c-LC1090" class="blob-code blob-code-inner js-file-line">  GdkDevice *event_device = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1091" class="blob-num js-line-number" data-line-number="1091"></td>
        <td id="file-gdkevents-quartz-c-LC1091" class="blob-code blob-code-inner js-file-line">  gdouble *axes = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1092" class="blob-num js-line-number" data-line-number="1092"></td>
        <td id="file-gdkevents-quartz-c-LC1092" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1093" class="blob-num js-line-number" data-line-number="1093"></td>
        <td id="file-gdkevents-quartz-c-LC1093" class="blob-code blob-code-inner js-file-line">  event_device = _gdk_quartz_device_manager_core_device_for_ns_event</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1094" class="blob-num js-line-number" data-line-number="1094"></td>
        <td id="file-gdkevents-quartz-c-LC1094" class="blob-code blob-code-inner js-file-line">  (</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1095" class="blob-num js-line-number" data-line-number="1095"></td>
        <td id="file-gdkevents-quartz-c-LC1095" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">gdk_display_get_device_manager</span> (_gdk_display),</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1096" class="blob-num js-line-number" data-line-number="1096"></td>
        <td id="file-gdkevents-quartz-c-LC1096" class="blob-code blob-code-inner js-file-line">    nsevent</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1097" class="blob-num js-line-number" data-line-number="1097"></td>
        <td id="file-gdkevents-quartz-c-LC1097" class="blob-code blob-code-inner js-file-line">  );</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1098" class="blob-num js-line-number" data-line-number="1098"></td>
        <td id="file-gdkevents-quartz-c-LC1098" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1099" class="blob-num js-line-number" data-line-number="1099"></td>
        <td id="file-gdkevents-quartz-c-LC1099" class="blob-code blob-code-inner js-file-line">  device_manager = <span class="pl-c1">GDK_QUARTZ_DEVICE_MANAGER_CORE</span> (_gdk_display-&gt;<span class="pl-smi">device_manager</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1100" class="blob-num js-line-number" data-line-number="1100"></td>
        <td id="file-gdkevents-quartz-c-LC1100" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1101" class="blob-num js-line-number" data-line-number="1101"></td>
        <td id="file-gdkevents-quartz-c-LC1101" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (device_manager-&gt;<span class="pl-smi">core_pointer</span> != event_device)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1102" class="blob-num js-line-number" data-line-number="1102"></td>
        <td id="file-gdkevents-quartz-c-LC1102" class="blob-code blob-code-inner js-file-line">  {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1103" class="blob-num js-line-number" data-line-number="1103"></td>
        <td id="file-gdkevents-quartz-c-LC1103" class="blob-code blob-code-inner js-file-line">    axes = <span class="pl-c1">g_malloc_n</span> (<span class="pl-c1">5</span>, <span class="pl-k">sizeof</span> (gdouble));</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1104" class="blob-num js-line-number" data-line-number="1104"></td>
        <td id="file-gdkevents-quartz-c-LC1104" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1105" class="blob-num js-line-number" data-line-number="1105"></td>
        <td id="file-gdkevents-quartz-c-LC1105" class="blob-code blob-code-inner js-file-line">    axes[<span class="pl-c1">0</span>] = x;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1106" class="blob-num js-line-number" data-line-number="1106"></td>
        <td id="file-gdkevents-quartz-c-LC1106" class="blob-code blob-code-inner js-file-line">    axes[<span class="pl-c1">1</span>] = y;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1107" class="blob-num js-line-number" data-line-number="1107"></td>
        <td id="file-gdkevents-quartz-c-LC1107" class="blob-code blob-code-inner js-file-line">    axes[<span class="pl-c1">2</span>] = [nsevent pressure];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1108" class="blob-num js-line-number" data-line-number="1108"></td>
        <td id="file-gdkevents-quartz-c-LC1108" class="blob-code blob-code-inner js-file-line">    axes[<span class="pl-c1">3</span>] = [nsevent tilt].<span class="pl-smi">x</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1109" class="blob-num js-line-number" data-line-number="1109"></td>
        <td id="file-gdkevents-quartz-c-LC1109" class="blob-code blob-code-inner js-file-line">    axes[<span class="pl-c1">4</span>] = [nsevent tilt].<span class="pl-smi">y</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1110" class="blob-num js-line-number" data-line-number="1110"></td>
        <td id="file-gdkevents-quartz-c-LC1110" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1111" class="blob-num js-line-number" data-line-number="1111"></td>
        <td id="file-gdkevents-quartz-c-LC1111" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1112" class="blob-num js-line-number" data-line-number="1112"></td>
        <td id="file-gdkevents-quartz-c-LC1112" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">type</span> = GDK_MOTION_NOTIFY;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1113" class="blob-num js-line-number" data-line-number="1113"></td>
        <td id="file-gdkevents-quartz-c-LC1113" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">motion</span>.<span class="pl-smi">window</span> = window;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1114" class="blob-num js-line-number" data-line-number="1114"></td>
        <td id="file-gdkevents-quartz-c-LC1114" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">motion</span>.<span class="pl-smi">time</span> = <span class="pl-c1">get_time_from_ns_event</span> (nsevent);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1115" class="blob-num js-line-number" data-line-number="1115"></td>
        <td id="file-gdkevents-quartz-c-LC1115" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">motion</span>.<span class="pl-smi">x</span> = x;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1116" class="blob-num js-line-number" data-line-number="1116"></td>
        <td id="file-gdkevents-quartz-c-LC1116" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">motion</span>.<span class="pl-smi">y</span> = y;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1117" class="blob-num js-line-number" data-line-number="1117"></td>
        <td id="file-gdkevents-quartz-c-LC1117" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">motion</span>.<span class="pl-smi">x_root</span> = x_root;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1118" class="blob-num js-line-number" data-line-number="1118"></td>
        <td id="file-gdkevents-quartz-c-LC1118" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">motion</span>.<span class="pl-smi">y_root</span> = y_root;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1119" class="blob-num js-line-number" data-line-number="1119"></td>
        <td id="file-gdkevents-quartz-c-LC1119" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">motion</span>.<span class="pl-smi">axes</span> = axes;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1120" class="blob-num js-line-number" data-line-number="1120"></td>
        <td id="file-gdkevents-quartz-c-LC1120" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">motion</span>.<span class="pl-smi">state</span> = <span class="pl-c1">get_keyboard_modifiers_from_ns_event</span> (nsevent) |</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1121" class="blob-num js-line-number" data-line-number="1121"></td>
        <td id="file-gdkevents-quartz-c-LC1121" class="blob-code blob-code-inner js-file-line">                        <span class="pl-c1">_gdk_quartz_events_get_current_mouse_modifiers</span> ();</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1122" class="blob-num js-line-number" data-line-number="1122"></td>
        <td id="file-gdkevents-quartz-c-LC1122" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">motion</span>.<span class="pl-smi">is_hint</span> = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1123" class="blob-num js-line-number" data-line-number="1123"></td>
        <td id="file-gdkevents-quartz-c-LC1123" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">button</span>.<span class="pl-smi">device</span> = device_manager-&gt;<span class="pl-smi">core_pointer</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1124" class="blob-num js-line-number" data-line-number="1124"></td>
        <td id="file-gdkevents-quartz-c-LC1124" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">gdk_event_set_seat</span> (event, <span class="pl-c1">gdk_device_get_seat</span> (device_manager-&gt;<span class="pl-smi">core_pointer</span>));</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1125" class="blob-num js-line-number" data-line-number="1125"></td>
        <td id="file-gdkevents-quartz-c-LC1125" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">gdk_event_set_source_device</span>(event, event_device);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1126" class="blob-num js-line-number" data-line-number="1126"></td>
        <td id="file-gdkevents-quartz-c-LC1126" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1127" class="blob-num js-line-number" data-line-number="1127"></td>
        <td id="file-gdkevents-quartz-c-LC1127" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1128" class="blob-num js-line-number" data-line-number="1128"></td>
        <td id="file-gdkevents-quartz-c-LC1128" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1129" class="blob-num js-line-number" data-line-number="1129"></td>
        <td id="file-gdkevents-quartz-c-LC1129" class="blob-code blob-code-inner js-file-line"><span class="pl-en">fill_scroll_event</span> (GdkWindow          *window,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1130" class="blob-num js-line-number" data-line-number="1130"></td>
        <td id="file-gdkevents-quartz-c-LC1130" class="blob-code blob-code-inner js-file-line">                   GdkEvent           *event,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1131" class="blob-num js-line-number" data-line-number="1131"></td>
        <td id="file-gdkevents-quartz-c-LC1131" class="blob-code blob-code-inner js-file-line">                   NSEvent            *nsevent,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1132" class="blob-num js-line-number" data-line-number="1132"></td>
        <td id="file-gdkevents-quartz-c-LC1132" class="blob-code blob-code-inner js-file-line">                   gint                x,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1133" class="blob-num js-line-number" data-line-number="1133"></td>
        <td id="file-gdkevents-quartz-c-LC1133" class="blob-code blob-code-inner js-file-line">                   gint                y,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1134" class="blob-num js-line-number" data-line-number="1134"></td>
        <td id="file-gdkevents-quartz-c-LC1134" class="blob-code blob-code-inner js-file-line">                   gint                x_root,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1135" class="blob-num js-line-number" data-line-number="1135"></td>
        <td id="file-gdkevents-quartz-c-LC1135" class="blob-code blob-code-inner js-file-line">                   gint                y_root,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1136" class="blob-num js-line-number" data-line-number="1136"></td>
        <td id="file-gdkevents-quartz-c-LC1136" class="blob-code blob-code-inner js-file-line">                   gdouble             delta_x,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1137" class="blob-num js-line-number" data-line-number="1137"></td>
        <td id="file-gdkevents-quartz-c-LC1137" class="blob-code blob-code-inner js-file-line">                   gdouble             delta_y,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1138" class="blob-num js-line-number" data-line-number="1138"></td>
        <td id="file-gdkevents-quartz-c-LC1138" class="blob-code blob-code-inner js-file-line">                   GdkScrollDirection  direction)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1139" class="blob-num js-line-number" data-line-number="1139"></td>
        <td id="file-gdkevents-quartz-c-LC1139" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1140" class="blob-num js-line-number" data-line-number="1140"></td>
        <td id="file-gdkevents-quartz-c-LC1140" class="blob-code blob-code-inner js-file-line">  GdkQuartzDeviceManagerCore *device_manager;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1141" class="blob-num js-line-number" data-line-number="1141"></td>
        <td id="file-gdkevents-quartz-c-LC1141" class="blob-code blob-code-inner js-file-line">  NSPoint point;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1142" class="blob-num js-line-number" data-line-number="1142"></td>
        <td id="file-gdkevents-quartz-c-LC1142" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1143" class="blob-num js-line-number" data-line-number="1143"></td>
        <td id="file-gdkevents-quartz-c-LC1143" class="blob-code blob-code-inner js-file-line">  point = [nsevent locationInWindow];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1144" class="blob-num js-line-number" data-line-number="1144"></td>
        <td id="file-gdkevents-quartz-c-LC1144" class="blob-code blob-code-inner js-file-line">  device_manager = <span class="pl-c1">GDK_QUARTZ_DEVICE_MANAGER_CORE</span> (_gdk_display-&gt;<span class="pl-smi">device_manager</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1145" class="blob-num js-line-number" data-line-number="1145"></td>
        <td id="file-gdkevents-quartz-c-LC1145" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1146" class="blob-num js-line-number" data-line-number="1146"></td>
        <td id="file-gdkevents-quartz-c-LC1146" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">type</span> = GDK_SCROLL;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1147" class="blob-num js-line-number" data-line-number="1147"></td>
        <td id="file-gdkevents-quartz-c-LC1147" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">scroll</span>.<span class="pl-smi">window</span> = window;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1148" class="blob-num js-line-number" data-line-number="1148"></td>
        <td id="file-gdkevents-quartz-c-LC1148" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">scroll</span>.<span class="pl-smi">time</span> = <span class="pl-c1">get_time_from_ns_event</span> (nsevent);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1149" class="blob-num js-line-number" data-line-number="1149"></td>
        <td id="file-gdkevents-quartz-c-LC1149" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">scroll</span>.<span class="pl-smi">x</span> = x;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1150" class="blob-num js-line-number" data-line-number="1150"></td>
        <td id="file-gdkevents-quartz-c-LC1150" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">scroll</span>.<span class="pl-smi">y</span> = y;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1151" class="blob-num js-line-number" data-line-number="1151"></td>
        <td id="file-gdkevents-quartz-c-LC1151" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">scroll</span>.<span class="pl-smi">x_root</span> = x_root;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1152" class="blob-num js-line-number" data-line-number="1152"></td>
        <td id="file-gdkevents-quartz-c-LC1152" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">scroll</span>.<span class="pl-smi">y_root</span> = y_root;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1153" class="blob-num js-line-number" data-line-number="1153"></td>
        <td id="file-gdkevents-quartz-c-LC1153" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">scroll</span>.<span class="pl-smi">state</span> = <span class="pl-c1">get_keyboard_modifiers_from_ns_event</span> (nsevent);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1154" class="blob-num js-line-number" data-line-number="1154"></td>
        <td id="file-gdkevents-quartz-c-LC1154" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">scroll</span>.<span class="pl-smi">direction</span> = direction;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1155" class="blob-num js-line-number" data-line-number="1155"></td>
        <td id="file-gdkevents-quartz-c-LC1155" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">scroll</span>.<span class="pl-smi">device</span> = device_manager-&gt;<span class="pl-smi">core_pointer</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1156" class="blob-num js-line-number" data-line-number="1156"></td>
        <td id="file-gdkevents-quartz-c-LC1156" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">scroll</span>.<span class="pl-smi">delta_x</span> = delta_x;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1157" class="blob-num js-line-number" data-line-number="1157"></td>
        <td id="file-gdkevents-quartz-c-LC1157" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">scroll</span>.<span class="pl-smi">delta_y</span> = delta_y;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1158" class="blob-num js-line-number" data-line-number="1158"></td>
        <td id="file-gdkevents-quartz-c-LC1158" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">gdk_event_set_seat</span> (event, <span class="pl-c1">gdk_device_get_seat</span> (device_manager-&gt;<span class="pl-smi">core_pointer</span>));</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1159" class="blob-num js-line-number" data-line-number="1159"></td>
        <td id="file-gdkevents-quartz-c-LC1159" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1160" class="blob-num js-line-number" data-line-number="1160"></td>
        <td id="file-gdkevents-quartz-c-LC1160" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1161" class="blob-num js-line-number" data-line-number="1161"></td>
        <td id="file-gdkevents-quartz-c-LC1161" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1162" class="blob-num js-line-number" data-line-number="1162"></td>
        <td id="file-gdkevents-quartz-c-LC1162" class="blob-code blob-code-inner js-file-line"><span class="pl-en">fill_key_event</span> (GdkWindow    *window,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1163" class="blob-num js-line-number" data-line-number="1163"></td>
        <td id="file-gdkevents-quartz-c-LC1163" class="blob-code blob-code-inner js-file-line">                GdkEvent     *event,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1164" class="blob-num js-line-number" data-line-number="1164"></td>
        <td id="file-gdkevents-quartz-c-LC1164" class="blob-code blob-code-inner js-file-line">                NSEvent      *nsevent,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1165" class="blob-num js-line-number" data-line-number="1165"></td>
        <td id="file-gdkevents-quartz-c-LC1165" class="blob-code blob-code-inner js-file-line">                GdkEventType  type)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1166" class="blob-num js-line-number" data-line-number="1166"></td>
        <td id="file-gdkevents-quartz-c-LC1166" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1167" class="blob-num js-line-number" data-line-number="1167"></td>
        <td id="file-gdkevents-quartz-c-LC1167" class="blob-code blob-code-inner js-file-line">  GdkEventPrivate *priv;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1168" class="blob-num js-line-number" data-line-number="1168"></td>
        <td id="file-gdkevents-quartz-c-LC1168" class="blob-code blob-code-inner js-file-line">  GdkQuartzDeviceManagerCore *device_manager;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1169" class="blob-num js-line-number" data-line-number="1169"></td>
        <td id="file-gdkevents-quartz-c-LC1169" class="blob-code blob-code-inner js-file-line">  gchar buf[<span class="pl-c1">7</span>];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1170" class="blob-num js-line-number" data-line-number="1170"></td>
        <td id="file-gdkevents-quartz-c-LC1170" class="blob-code blob-code-inner js-file-line">  gunichar c = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1171" class="blob-num js-line-number" data-line-number="1171"></td>
        <td id="file-gdkevents-quartz-c-LC1171" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1172" class="blob-num js-line-number" data-line-number="1172"></td>
        <td id="file-gdkevents-quartz-c-LC1172" class="blob-code blob-code-inner js-file-line">  priv = (GdkEventPrivate *) event;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1173" class="blob-num js-line-number" data-line-number="1173"></td>
        <td id="file-gdkevents-quartz-c-LC1173" class="blob-code blob-code-inner js-file-line">  priv-&gt;<span class="pl-smi">windowing_data</span> = [nsevent retain];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1174" class="blob-num js-line-number" data-line-number="1174"></td>
        <td id="file-gdkevents-quartz-c-LC1174" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1175" class="blob-num js-line-number" data-line-number="1175"></td>
        <td id="file-gdkevents-quartz-c-LC1175" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">type</span> = type;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1176" class="blob-num js-line-number" data-line-number="1176"></td>
        <td id="file-gdkevents-quartz-c-LC1176" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">window</span> = window;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1177" class="blob-num js-line-number" data-line-number="1177"></td>
        <td id="file-gdkevents-quartz-c-LC1177" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">time</span> = <span class="pl-c1">get_time_from_ns_event</span> (nsevent);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1178" class="blob-num js-line-number" data-line-number="1178"></td>
        <td id="file-gdkevents-quartz-c-LC1178" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">state</span> = <span class="pl-c1">get_keyboard_modifiers_from_ns_event</span> (nsevent);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1179" class="blob-num js-line-number" data-line-number="1179"></td>
        <td id="file-gdkevents-quartz-c-LC1179" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">hardware_keycode</span> = [nsevent keyCode];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1180" class="blob-num js-line-number" data-line-number="1180"></td>
        <td id="file-gdkevents-quartz-c-LC1180" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">group</span> = ([nsevent modifierFlags] &amp; NSAlternateKeyMask) ? <span class="pl-c1">1</span> : <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1181" class="blob-num js-line-number" data-line-number="1181"></td>
        <td id="file-gdkevents-quartz-c-LC1181" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">keyval</span> = GDK_KEY_VoidSymbol;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1182" class="blob-num js-line-number" data-line-number="1182"></td>
        <td id="file-gdkevents-quartz-c-LC1182" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1183" class="blob-num js-line-number" data-line-number="1183"></td>
        <td id="file-gdkevents-quartz-c-LC1183" class="blob-code blob-code-inner js-file-line">  device_manager = <span class="pl-c1">GDK_QUARTZ_DEVICE_MANAGER_CORE</span> (_gdk_display-&gt;<span class="pl-smi">device_manager</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1184" class="blob-num js-line-number" data-line-number="1184"></td>
        <td id="file-gdkevents-quartz-c-LC1184" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">gdk_event_set_device</span> (event, device_manager-&gt;<span class="pl-smi">core_keyboard</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1185" class="blob-num js-line-number" data-line-number="1185"></td>
        <td id="file-gdkevents-quartz-c-LC1185" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">gdk_event_set_seat</span> (event, <span class="pl-c1">gdk_device_get_seat</span> (device_manager-&gt;<span class="pl-smi">core_keyboard</span>));</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1186" class="blob-num js-line-number" data-line-number="1186"></td>
        <td id="file-gdkevents-quartz-c-LC1186" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1187" class="blob-num js-line-number" data-line-number="1187"></td>
        <td id="file-gdkevents-quartz-c-LC1187" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">gdk_keymap_translate_keyboard_state</span> (<span class="pl-c1">gdk_keymap_get_for_display</span> (_gdk_display),</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1188" class="blob-num js-line-number" data-line-number="1188"></td>
        <td id="file-gdkevents-quartz-c-LC1188" class="blob-code blob-code-inner js-file-line">				       event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">hardware_keycode</span>,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1189" class="blob-num js-line-number" data-line-number="1189"></td>
        <td id="file-gdkevents-quartz-c-LC1189" class="blob-code blob-code-inner js-file-line">				       event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">state</span>,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1190" class="blob-num js-line-number" data-line-number="1190"></td>
        <td id="file-gdkevents-quartz-c-LC1190" class="blob-code blob-code-inner js-file-line">				       event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">group</span>,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1191" class="blob-num js-line-number" data-line-number="1191"></td>
        <td id="file-gdkevents-quartz-c-LC1191" class="blob-code blob-code-inner js-file-line">				       &amp;event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">keyval</span>,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1192" class="blob-num js-line-number" data-line-number="1192"></td>
        <td id="file-gdkevents-quartz-c-LC1192" class="blob-code blob-code-inner js-file-line">				       <span class="pl-c1">NULL</span>, <span class="pl-c1">NULL</span>, <span class="pl-c1">NULL</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1193" class="blob-num js-line-number" data-line-number="1193"></td>
        <td id="file-gdkevents-quartz-c-LC1193" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1194" class="blob-num js-line-number" data-line-number="1194"></td>
        <td id="file-gdkevents-quartz-c-LC1194" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">is_modifier</span> = <span class="pl-c1">_gdk_quartz_keys_is_modifier</span> (event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">hardware_keycode</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1195" class="blob-num js-line-number" data-line-number="1195"></td>
        <td id="file-gdkevents-quartz-c-LC1195" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1196" class="blob-num js-line-number" data-line-number="1196"></td>
        <td id="file-gdkevents-quartz-c-LC1196" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> If the key press is a modifier, the state should include the mask</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1197" class="blob-num js-line-number" data-line-number="1197"></td>
        <td id="file-gdkevents-quartz-c-LC1197" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * for that modifier but only for releases, not presses. This</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1198" class="blob-num js-line-number" data-line-number="1198"></td>
        <td id="file-gdkevents-quartz-c-LC1198" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * matches the X11 backend behavior.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1199" class="blob-num js-line-number" data-line-number="1199"></td>
        <td id="file-gdkevents-quartz-c-LC1199" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1200" class="blob-num js-line-number" data-line-number="1200"></td>
        <td id="file-gdkevents-quartz-c-LC1200" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">is_modifier</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1201" class="blob-num js-line-number" data-line-number="1201"></td>
        <td id="file-gdkevents-quartz-c-LC1201" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1202" class="blob-num js-line-number" data-line-number="1202"></td>
        <td id="file-gdkevents-quartz-c-LC1202" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">int</span> mask = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1203" class="blob-num js-line-number" data-line-number="1203"></td>
        <td id="file-gdkevents-quartz-c-LC1203" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1204" class="blob-num js-line-number" data-line-number="1204"></td>
        <td id="file-gdkevents-quartz-c-LC1204" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">switch</span> (event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">keyval</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1205" class="blob-num js-line-number" data-line-number="1205"></td>
        <td id="file-gdkevents-quartz-c-LC1205" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1206" class="blob-num js-line-number" data-line-number="1206"></td>
        <td id="file-gdkevents-quartz-c-LC1206" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> GDK_KEY_Meta_R:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1207" class="blob-num js-line-number" data-line-number="1207"></td>
        <td id="file-gdkevents-quartz-c-LC1207" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> GDK_KEY_Meta_L:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1208" class="blob-num js-line-number" data-line-number="1208"></td>
        <td id="file-gdkevents-quartz-c-LC1208" class="blob-code blob-code-inner js-file-line">          mask = GDK_MOD2_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1209" class="blob-num js-line-number" data-line-number="1209"></td>
        <td id="file-gdkevents-quartz-c-LC1209" class="blob-code blob-code-inner js-file-line">          <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1210" class="blob-num js-line-number" data-line-number="1210"></td>
        <td id="file-gdkevents-quartz-c-LC1210" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> GDK_KEY_Shift_R:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1211" class="blob-num js-line-number" data-line-number="1211"></td>
        <td id="file-gdkevents-quartz-c-LC1211" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> GDK_KEY_Shift_L:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1212" class="blob-num js-line-number" data-line-number="1212"></td>
        <td id="file-gdkevents-quartz-c-LC1212" class="blob-code blob-code-inner js-file-line">          mask = GDK_SHIFT_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1213" class="blob-num js-line-number" data-line-number="1213"></td>
        <td id="file-gdkevents-quartz-c-LC1213" class="blob-code blob-code-inner js-file-line">          <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1214" class="blob-num js-line-number" data-line-number="1214"></td>
        <td id="file-gdkevents-quartz-c-LC1214" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> GDK_KEY_Caps_Lock:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1215" class="blob-num js-line-number" data-line-number="1215"></td>
        <td id="file-gdkevents-quartz-c-LC1215" class="blob-code blob-code-inner js-file-line">          mask = GDK_LOCK_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1216" class="blob-num js-line-number" data-line-number="1216"></td>
        <td id="file-gdkevents-quartz-c-LC1216" class="blob-code blob-code-inner js-file-line">          <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1217" class="blob-num js-line-number" data-line-number="1217"></td>
        <td id="file-gdkevents-quartz-c-LC1217" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> GDK_KEY_Alt_R:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1218" class="blob-num js-line-number" data-line-number="1218"></td>
        <td id="file-gdkevents-quartz-c-LC1218" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> GDK_KEY_Alt_L:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1219" class="blob-num js-line-number" data-line-number="1219"></td>
        <td id="file-gdkevents-quartz-c-LC1219" class="blob-code blob-code-inner js-file-line">          mask = GDK_MOD1_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1220" class="blob-num js-line-number" data-line-number="1220"></td>
        <td id="file-gdkevents-quartz-c-LC1220" class="blob-code blob-code-inner js-file-line">          <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1221" class="blob-num js-line-number" data-line-number="1221"></td>
        <td id="file-gdkevents-quartz-c-LC1221" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> GDK_KEY_Control_R:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1222" class="blob-num js-line-number" data-line-number="1222"></td>
        <td id="file-gdkevents-quartz-c-LC1222" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> GDK_KEY_Control_L:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1223" class="blob-num js-line-number" data-line-number="1223"></td>
        <td id="file-gdkevents-quartz-c-LC1223" class="blob-code blob-code-inner js-file-line">          mask = GDK_CONTROL_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1224" class="blob-num js-line-number" data-line-number="1224"></td>
        <td id="file-gdkevents-quartz-c-LC1224" class="blob-code blob-code-inner js-file-line">          <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1225" class="blob-num js-line-number" data-line-number="1225"></td>
        <td id="file-gdkevents-quartz-c-LC1225" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">default</span>:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1226" class="blob-num js-line-number" data-line-number="1226"></td>
        <td id="file-gdkevents-quartz-c-LC1226" class="blob-code blob-code-inner js-file-line">          mask = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1227" class="blob-num js-line-number" data-line-number="1227"></td>
        <td id="file-gdkevents-quartz-c-LC1227" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1228" class="blob-num js-line-number" data-line-number="1228"></td>
        <td id="file-gdkevents-quartz-c-LC1228" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1229" class="blob-num js-line-number" data-line-number="1229"></td>
        <td id="file-gdkevents-quartz-c-LC1229" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (type == GDK_KEY_PRESS)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1230" class="blob-num js-line-number" data-line-number="1230"></td>
        <td id="file-gdkevents-quartz-c-LC1230" class="blob-code blob-code-inner js-file-line">        event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">state</span> &amp;= ~mask;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1231" class="blob-num js-line-number" data-line-number="1231"></td>
        <td id="file-gdkevents-quartz-c-LC1231" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">else</span> <span class="pl-k">if</span> (type == GDK_KEY_RELEASE)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1232" class="blob-num js-line-number" data-line-number="1232"></td>
        <td id="file-gdkevents-quartz-c-LC1232" class="blob-code blob-code-inner js-file-line">        event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">state</span> |= mask;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1233" class="blob-num js-line-number" data-line-number="1233"></td>
        <td id="file-gdkevents-quartz-c-LC1233" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1234" class="blob-num js-line-number" data-line-number="1234"></td>
        <td id="file-gdkevents-quartz-c-LC1234" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1235" class="blob-num js-line-number" data-line-number="1235"></td>
        <td id="file-gdkevents-quartz-c-LC1235" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">state</span> |= <span class="pl-c1">_gdk_quartz_events_get_current_mouse_modifiers</span> ();</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1236" class="blob-num js-line-number" data-line-number="1236"></td>
        <td id="file-gdkevents-quartz-c-LC1236" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1237" class="blob-num js-line-number" data-line-number="1237"></td>
        <td id="file-gdkevents-quartz-c-LC1237" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> The X11 backend adds the first virtual modifier MOD2..MOD5 are</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1238" class="blob-num js-line-number" data-line-number="1238"></td>
        <td id="file-gdkevents-quartz-c-LC1238" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * mapped to. Since we only have one virtual modifier in the quartz</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1239" class="blob-num js-line-number" data-line-number="1239"></td>
        <td id="file-gdkevents-quartz-c-LC1239" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * backend, calling the standard function will do.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1240" class="blob-num js-line-number" data-line-number="1240"></td>
        <td id="file-gdkevents-quartz-c-LC1240" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1241" class="blob-num js-line-number" data-line-number="1241"></td>
        <td id="file-gdkevents-quartz-c-LC1241" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">gdk_keymap_add_virtual_modifiers</span> (<span class="pl-c1">gdk_keymap_get_for_display</span> (_gdk_display),</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1242" class="blob-num js-line-number" data-line-number="1242"></td>
        <td id="file-gdkevents-quartz-c-LC1242" class="blob-code blob-code-inner js-file-line">                                    &amp;event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">state</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1243" class="blob-num js-line-number" data-line-number="1243"></td>
        <td id="file-gdkevents-quartz-c-LC1243" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1244" class="blob-num js-line-number" data-line-number="1244"></td>
        <td id="file-gdkevents-quartz-c-LC1244" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">string</span> = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1245" class="blob-num js-line-number" data-line-number="1245"></td>
        <td id="file-gdkevents-quartz-c-LC1245" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1246" class="blob-num js-line-number" data-line-number="1246"></td>
        <td id="file-gdkevents-quartz-c-LC1246" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> Fill in -&gt;string since apps depend on it, taken from the x11 backend. <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1247" class="blob-num js-line-number" data-line-number="1247"></td>
        <td id="file-gdkevents-quartz-c-LC1247" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">keyval</span> != GDK_KEY_VoidSymbol)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1248" class="blob-num js-line-number" data-line-number="1248"></td>
        <td id="file-gdkevents-quartz-c-LC1248" class="blob-code blob-code-inner js-file-line">    c = <span class="pl-c1">gdk_keyval_to_unicode</span> (event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">keyval</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1249" class="blob-num js-line-number" data-line-number="1249"></td>
        <td id="file-gdkevents-quartz-c-LC1249" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1250" class="blob-num js-line-number" data-line-number="1250"></td>
        <td id="file-gdkevents-quartz-c-LC1250" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (c)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1251" class="blob-num js-line-number" data-line-number="1251"></td>
        <td id="file-gdkevents-quartz-c-LC1251" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1252" class="blob-num js-line-number" data-line-number="1252"></td>
        <td id="file-gdkevents-quartz-c-LC1252" class="blob-code blob-code-inner js-file-line">      gsize bytes_written;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1253" class="blob-num js-line-number" data-line-number="1253"></td>
        <td id="file-gdkevents-quartz-c-LC1253" class="blob-code blob-code-inner js-file-line">      gint len;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1254" class="blob-num js-line-number" data-line-number="1254"></td>
        <td id="file-gdkevents-quartz-c-LC1254" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1255" class="blob-num js-line-number" data-line-number="1255"></td>
        <td id="file-gdkevents-quartz-c-LC1255" class="blob-code blob-code-inner js-file-line">      len = <span class="pl-c1">g_unichar_to_utf8</span> (c, buf);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1256" class="blob-num js-line-number" data-line-number="1256"></td>
        <td id="file-gdkevents-quartz-c-LC1256" class="blob-code blob-code-inner js-file-line">      buf[len] = <span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\0</span><span class="pl-pds">&#39;</span></span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1257" class="blob-num js-line-number" data-line-number="1257"></td>
        <td id="file-gdkevents-quartz-c-LC1257" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1258" class="blob-num js-line-number" data-line-number="1258"></td>
        <td id="file-gdkevents-quartz-c-LC1258" class="blob-code blob-code-inner js-file-line">      event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">string</span> = <span class="pl-c1">g_locale_from_utf8</span> (buf, len,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1259" class="blob-num js-line-number" data-line-number="1259"></td>
        <td id="file-gdkevents-quartz-c-LC1259" class="blob-code blob-code-inner js-file-line">					      <span class="pl-c1">NULL</span>, &amp;bytes_written,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1260" class="blob-num js-line-number" data-line-number="1260"></td>
        <td id="file-gdkevents-quartz-c-LC1260" class="blob-code blob-code-inner js-file-line">					      <span class="pl-c1">NULL</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1261" class="blob-num js-line-number" data-line-number="1261"></td>
        <td id="file-gdkevents-quartz-c-LC1261" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">string</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1262" class="blob-num js-line-number" data-line-number="1262"></td>
        <td id="file-gdkevents-quartz-c-LC1262" class="blob-code blob-code-inner js-file-line">	event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">length</span> = bytes_written;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1263" class="blob-num js-line-number" data-line-number="1263"></td>
        <td id="file-gdkevents-quartz-c-LC1263" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1264" class="blob-num js-line-number" data-line-number="1264"></td>
        <td id="file-gdkevents-quartz-c-LC1264" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">else</span> <span class="pl-k">if</span> (event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">keyval</span> == GDK_KEY_Escape)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1265" class="blob-num js-line-number" data-line-number="1265"></td>
        <td id="file-gdkevents-quartz-c-LC1265" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1266" class="blob-num js-line-number" data-line-number="1266"></td>
        <td id="file-gdkevents-quartz-c-LC1266" class="blob-code blob-code-inner js-file-line">      event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">length</span> = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1267" class="blob-num js-line-number" data-line-number="1267"></td>
        <td id="file-gdkevents-quartz-c-LC1267" class="blob-code blob-code-inner js-file-line">      event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">string</span> = <span class="pl-c1">g_strdup</span> (<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\033</span><span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1268" class="blob-num js-line-number" data-line-number="1268"></td>
        <td id="file-gdkevents-quartz-c-LC1268" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1269" class="blob-num js-line-number" data-line-number="1269"></td>
        <td id="file-gdkevents-quartz-c-LC1269" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">else</span> <span class="pl-k">if</span> (event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">keyval</span> == GDK_KEY_Return ||</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1270" class="blob-num js-line-number" data-line-number="1270"></td>
        <td id="file-gdkevents-quartz-c-LC1270" class="blob-code blob-code-inner js-file-line">	  event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">keyval</span> == GDK_KEY_KP_Enter)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1271" class="blob-num js-line-number" data-line-number="1271"></td>
        <td id="file-gdkevents-quartz-c-LC1271" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1272" class="blob-num js-line-number" data-line-number="1272"></td>
        <td id="file-gdkevents-quartz-c-LC1272" class="blob-code blob-code-inner js-file-line">      event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">length</span> = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1273" class="blob-num js-line-number" data-line-number="1273"></td>
        <td id="file-gdkevents-quartz-c-LC1273" class="blob-code blob-code-inner js-file-line">      event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">string</span> = <span class="pl-c1">g_strdup</span> (<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\r</span><span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1274" class="blob-num js-line-number" data-line-number="1274"></td>
        <td id="file-gdkevents-quartz-c-LC1274" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1275" class="blob-num js-line-number" data-line-number="1275"></td>
        <td id="file-gdkevents-quartz-c-LC1275" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1276" class="blob-num js-line-number" data-line-number="1276"></td>
        <td id="file-gdkevents-quartz-c-LC1276" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (!event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">string</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1277" class="blob-num js-line-number" data-line-number="1277"></td>
        <td id="file-gdkevents-quartz-c-LC1277" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1278" class="blob-num js-line-number" data-line-number="1278"></td>
        <td id="file-gdkevents-quartz-c-LC1278" class="blob-code blob-code-inner js-file-line">      event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">length</span> = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1279" class="blob-num js-line-number" data-line-number="1279"></td>
        <td id="file-gdkevents-quartz-c-LC1279" class="blob-code blob-code-inner js-file-line">      event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">string</span> = <span class="pl-c1">g_strdup</span> (<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1280" class="blob-num js-line-number" data-line-number="1280"></td>
        <td id="file-gdkevents-quartz-c-LC1280" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1281" class="blob-num js-line-number" data-line-number="1281"></td>
        <td id="file-gdkevents-quartz-c-LC1281" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1282" class="blob-num js-line-number" data-line-number="1282"></td>
        <td id="file-gdkevents-quartz-c-LC1282" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">GDK_NOTE</span>(EVENTS,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1283" class="blob-num js-line-number" data-line-number="1283"></td>
        <td id="file-gdkevents-quartz-c-LC1283" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">g_message</span> (<span class="pl-s"><span class="pl-pds">&quot;</span>key <span class="pl-c1">%s</span>:<span class="pl-cce">\t\t</span>window: <span class="pl-c1">%p</span>  key: <span class="pl-c1">%12s</span>  <span class="pl-c1">%d</span><span class="pl-pds">&quot;</span></span>,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1284" class="blob-num js-line-number" data-line-number="1284"></td>
        <td id="file-gdkevents-quartz-c-LC1284" class="blob-code blob-code-inner js-file-line">	  type == GDK_KEY_PRESS ? <span class="pl-s"><span class="pl-pds">&quot;</span>press<span class="pl-pds">&quot;</span></span> : <span class="pl-s"><span class="pl-pds">&quot;</span>release<span class="pl-pds">&quot;</span></span>,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1285" class="blob-num js-line-number" data-line-number="1285"></td>
        <td id="file-gdkevents-quartz-c-LC1285" class="blob-code blob-code-inner js-file-line">	  event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">window</span>,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1286" class="blob-num js-line-number" data-line-number="1286"></td>
        <td id="file-gdkevents-quartz-c-LC1286" class="blob-code blob-code-inner js-file-line">	  event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">keyval</span> ? <span class="pl-c1">gdk_keyval_name</span> (event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">keyval</span>) : <span class="pl-s"><span class="pl-pds">&quot;</span>(none)<span class="pl-pds">&quot;</span></span>,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1287" class="blob-num js-line-number" data-line-number="1287"></td>
        <td id="file-gdkevents-quartz-c-LC1287" class="blob-code blob-code-inner js-file-line">	  event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">keyval</span>));</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1288" class="blob-num js-line-number" data-line-number="1288"></td>
        <td id="file-gdkevents-quartz-c-LC1288" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1289" class="blob-num js-line-number" data-line-number="1289"></td>
        <td id="file-gdkevents-quartz-c-LC1289" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1290" class="blob-num js-line-number" data-line-number="1290"></td>
        <td id="file-gdkevents-quartz-c-LC1290" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> gboolean</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1291" class="blob-num js-line-number" data-line-number="1291"></td>
        <td id="file-gdkevents-quartz-c-LC1291" class="blob-code blob-code-inner js-file-line"><span class="pl-en">synthesize_crossing_event</span> (GdkWindow *window,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1292" class="blob-num js-line-number" data-line-number="1292"></td>
        <td id="file-gdkevents-quartz-c-LC1292" class="blob-code blob-code-inner js-file-line">                           GdkEvent  *event,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1293" class="blob-num js-line-number" data-line-number="1293"></td>
        <td id="file-gdkevents-quartz-c-LC1293" class="blob-code blob-code-inner js-file-line">                           NSEvent   *nsevent,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1294" class="blob-num js-line-number" data-line-number="1294"></td>
        <td id="file-gdkevents-quartz-c-LC1294" class="blob-code blob-code-inner js-file-line">                           gint       x,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1295" class="blob-num js-line-number" data-line-number="1295"></td>
        <td id="file-gdkevents-quartz-c-LC1295" class="blob-code blob-code-inner js-file-line">                           gint       y,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1296" class="blob-num js-line-number" data-line-number="1296"></td>
        <td id="file-gdkevents-quartz-c-LC1296" class="blob-code blob-code-inner js-file-line">                           gint       x_root,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1297" class="blob-num js-line-number" data-line-number="1297"></td>
        <td id="file-gdkevents-quartz-c-LC1297" class="blob-code blob-code-inner js-file-line">                           gint       y_root)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1298" class="blob-num js-line-number" data-line-number="1298"></td>
        <td id="file-gdkevents-quartz-c-LC1298" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1299" class="blob-num js-line-number" data-line-number="1299"></td>
        <td id="file-gdkevents-quartz-c-LC1299" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">switch</span> ([nsevent type])</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1300" class="blob-num js-line-number" data-line-number="1300"></td>
        <td id="file-gdkevents-quartz-c-LC1300" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1301" class="blob-num js-line-number" data-line-number="1301"></td>
        <td id="file-gdkevents-quartz-c-LC1301" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSMouseEntered:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1302" class="blob-num js-line-number" data-line-number="1302"></td>
        <td id="file-gdkevents-quartz-c-LC1302" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> Enter events are considered always to be from another toplevel</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1303" class="blob-num js-line-number" data-line-number="1303"></td>
        <td id="file-gdkevents-quartz-c-LC1303" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * window, this shouldn&#39;t negatively affect any app or gtk code,</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1304" class="blob-num js-line-number" data-line-number="1304"></td>
        <td id="file-gdkevents-quartz-c-LC1304" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * and is the only way to make GtkMenu work. EEK EEK EEK.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1305" class="blob-num js-line-number" data-line-number="1305"></td>
        <td id="file-gdkevents-quartz-c-LC1305" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1306" class="blob-num js-line-number" data-line-number="1306"></td>
        <td id="file-gdkevents-quartz-c-LC1306" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (!(window-&gt;<span class="pl-smi">event_mask</span> &amp; GDK_ENTER_NOTIFY_MASK))</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1307" class="blob-num js-line-number" data-line-number="1307"></td>
        <td id="file-gdkevents-quartz-c-LC1307" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1308" class="blob-num js-line-number" data-line-number="1308"></td>
        <td id="file-gdkevents-quartz-c-LC1308" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1309" class="blob-num js-line-number" data-line-number="1309"></td>
        <td id="file-gdkevents-quartz-c-LC1309" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">fill_crossing_event</span> (window, event, nsevent,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1310" class="blob-num js-line-number" data-line-number="1310"></td>
        <td id="file-gdkevents-quartz-c-LC1310" class="blob-code blob-code-inner js-file-line">                           x, y,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1311" class="blob-num js-line-number" data-line-number="1311"></td>
        <td id="file-gdkevents-quartz-c-LC1311" class="blob-code blob-code-inner js-file-line">                           x_root, y_root,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1312" class="blob-num js-line-number" data-line-number="1312"></td>
        <td id="file-gdkevents-quartz-c-LC1312" class="blob-code blob-code-inner js-file-line">                           GDK_ENTER_NOTIFY,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1313" class="blob-num js-line-number" data-line-number="1313"></td>
        <td id="file-gdkevents-quartz-c-LC1313" class="blob-code blob-code-inner js-file-line">                           GDK_CROSSING_NORMAL,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1314" class="blob-num js-line-number" data-line-number="1314"></td>
        <td id="file-gdkevents-quartz-c-LC1314" class="blob-code blob-code-inner js-file-line">                           GDK_NOTIFY_NONLINEAR);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1315" class="blob-num js-line-number" data-line-number="1315"></td>
        <td id="file-gdkevents-quartz-c-LC1315" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> <span class="pl-c1">TRUE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1316" class="blob-num js-line-number" data-line-number="1316"></td>
        <td id="file-gdkevents-quartz-c-LC1316" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1317" class="blob-num js-line-number" data-line-number="1317"></td>
        <td id="file-gdkevents-quartz-c-LC1317" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSMouseExited:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1318" class="blob-num js-line-number" data-line-number="1318"></td>
        <td id="file-gdkevents-quartz-c-LC1318" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> See above <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1319" class="blob-num js-line-number" data-line-number="1319"></td>
        <td id="file-gdkevents-quartz-c-LC1319" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (!(window-&gt;<span class="pl-smi">event_mask</span> &amp; GDK_LEAVE_NOTIFY_MASK))</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1320" class="blob-num js-line-number" data-line-number="1320"></td>
        <td id="file-gdkevents-quartz-c-LC1320" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1321" class="blob-num js-line-number" data-line-number="1321"></td>
        <td id="file-gdkevents-quartz-c-LC1321" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1322" class="blob-num js-line-number" data-line-number="1322"></td>
        <td id="file-gdkevents-quartz-c-LC1322" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">fill_crossing_event</span> (window, event, nsevent,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1323" class="blob-num js-line-number" data-line-number="1323"></td>
        <td id="file-gdkevents-quartz-c-LC1323" class="blob-code blob-code-inner js-file-line">                           x, y,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1324" class="blob-num js-line-number" data-line-number="1324"></td>
        <td id="file-gdkevents-quartz-c-LC1324" class="blob-code blob-code-inner js-file-line">                           x_root, y_root,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1325" class="blob-num js-line-number" data-line-number="1325"></td>
        <td id="file-gdkevents-quartz-c-LC1325" class="blob-code blob-code-inner js-file-line">                           GDK_LEAVE_NOTIFY,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1326" class="blob-num js-line-number" data-line-number="1326"></td>
        <td id="file-gdkevents-quartz-c-LC1326" class="blob-code blob-code-inner js-file-line">                           GDK_CROSSING_NORMAL,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1327" class="blob-num js-line-number" data-line-number="1327"></td>
        <td id="file-gdkevents-quartz-c-LC1327" class="blob-code blob-code-inner js-file-line">                           GDK_NOTIFY_NONLINEAR);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1328" class="blob-num js-line-number" data-line-number="1328"></td>
        <td id="file-gdkevents-quartz-c-LC1328" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> <span class="pl-c1">TRUE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1329" class="blob-num js-line-number" data-line-number="1329"></td>
        <td id="file-gdkevents-quartz-c-LC1329" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1330" class="blob-num js-line-number" data-line-number="1330"></td>
        <td id="file-gdkevents-quartz-c-LC1330" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">default</span>:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1331" class="blob-num js-line-number" data-line-number="1331"></td>
        <td id="file-gdkevents-quartz-c-LC1331" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1332" class="blob-num js-line-number" data-line-number="1332"></td>
        <td id="file-gdkevents-quartz-c-LC1332" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1333" class="blob-num js-line-number" data-line-number="1333"></td>
        <td id="file-gdkevents-quartz-c-LC1333" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1334" class="blob-num js-line-number" data-line-number="1334"></td>
        <td id="file-gdkevents-quartz-c-LC1334" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1335" class="blob-num js-line-number" data-line-number="1335"></td>
        <td id="file-gdkevents-quartz-c-LC1335" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1336" class="blob-num js-line-number" data-line-number="1336"></td>
        <td id="file-gdkevents-quartz-c-LC1336" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1337" class="blob-num js-line-number" data-line-number="1337"></td>
        <td id="file-gdkevents-quartz-c-LC1337" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1338" class="blob-num js-line-number" data-line-number="1338"></td>
        <td id="file-gdkevents-quartz-c-LC1338" class="blob-code blob-code-inner js-file-line"><span class="pl-en">_gdk_quartz_synthesize_null_key_event</span> (GdkWindow *window)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1339" class="blob-num js-line-number" data-line-number="1339"></td>
        <td id="file-gdkevents-quartz-c-LC1339" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1340" class="blob-num js-line-number" data-line-number="1340"></td>
        <td id="file-gdkevents-quartz-c-LC1340" class="blob-code blob-code-inner js-file-line">  GdkEvent *event;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1341" class="blob-num js-line-number" data-line-number="1341"></td>
        <td id="file-gdkevents-quartz-c-LC1341" class="blob-code blob-code-inner js-file-line">  GdkQuartzDeviceManagerCore *device_manager;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1342" class="blob-num js-line-number" data-line-number="1342"></td>
        <td id="file-gdkevents-quartz-c-LC1342" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1343" class="blob-num js-line-number" data-line-number="1343"></td>
        <td id="file-gdkevents-quartz-c-LC1343" class="blob-code blob-code-inner js-file-line">  event = <span class="pl-c1">gdk_event_new</span> (GDK_KEY_PRESS);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1344" class="blob-num js-line-number" data-line-number="1344"></td>
        <td id="file-gdkevents-quartz-c-LC1344" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">type</span> = GDK_KEY_PRESS;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1345" class="blob-num js-line-number" data-line-number="1345"></td>
        <td id="file-gdkevents-quartz-c-LC1345" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">window</span> = window;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1346" class="blob-num js-line-number" data-line-number="1346"></td>
        <td id="file-gdkevents-quartz-c-LC1346" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">state</span> = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1347" class="blob-num js-line-number" data-line-number="1347"></td>
        <td id="file-gdkevents-quartz-c-LC1347" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">hardware_keycode</span> = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1348" class="blob-num js-line-number" data-line-number="1348"></td>
        <td id="file-gdkevents-quartz-c-LC1348" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">group</span> = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1349" class="blob-num js-line-number" data-line-number="1349"></td>
        <td id="file-gdkevents-quartz-c-LC1349" class="blob-code blob-code-inner js-file-line">  event-&gt;<span class="pl-smi">key</span>.<span class="pl-smi">keyval</span> = GDK_KEY_VoidSymbol;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1350" class="blob-num js-line-number" data-line-number="1350"></td>
        <td id="file-gdkevents-quartz-c-LC1350" class="blob-code blob-code-inner js-file-line">  device_manager = <span class="pl-c1">GDK_QUARTZ_DEVICE_MANAGER_CORE</span> (_gdk_display-&gt;<span class="pl-smi">device_manager</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1351" class="blob-num js-line-number" data-line-number="1351"></td>
        <td id="file-gdkevents-quartz-c-LC1351" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">gdk_event_set_device</span> (event, device_manager-&gt;<span class="pl-smi">core_keyboard</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1352" class="blob-num js-line-number" data-line-number="1352"></td>
        <td id="file-gdkevents-quartz-c-LC1352" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">gdk_event_set_seat</span> (event, <span class="pl-c1">gdk_device_get_seat</span> (device_manager-&gt;<span class="pl-smi">core_keyboard</span>));</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1353" class="blob-num js-line-number" data-line-number="1353"></td>
        <td id="file-gdkevents-quartz-c-LC1353" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">append_event</span>(event, <span class="pl-c1">FALSE</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1354" class="blob-num js-line-number" data-line-number="1354"></td>
        <td id="file-gdkevents-quartz-c-LC1354" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1355" class="blob-num js-line-number" data-line-number="1355"></td>
        <td id="file-gdkevents-quartz-c-LC1355" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1356" class="blob-num js-line-number" data-line-number="1356"></td>
        <td id="file-gdkevents-quartz-c-LC1356" class="blob-code blob-code-inner js-file-line">GdkModifierType</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1357" class="blob-num js-line-number" data-line-number="1357"></td>
        <td id="file-gdkevents-quartz-c-LC1357" class="blob-code blob-code-inner js-file-line"><span class="pl-en">_gdk_quartz_events_get_current_keyboard_modifiers</span> (<span class="pl-k">void</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1358" class="blob-num js-line-number" data-line-number="1358"></td>
        <td id="file-gdkevents-quartz-c-LC1358" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1359" class="blob-num js-line-number" data-line-number="1359"></td>
        <td id="file-gdkevents-quartz-c-LC1359" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (<span class="pl-c1">gdk_quartz_osx_version</span> () &gt;= GDK_OSX_SNOW_LEOPARD)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1360" class="blob-num js-line-number" data-line-number="1360"></td>
        <td id="file-gdkevents-quartz-c-LC1360" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1361" class="blob-num js-line-number" data-line-number="1361"></td>
        <td id="file-gdkevents-quartz-c-LC1361" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> <span class="pl-c1">get_keyboard_modifiers_from_ns_flags</span> ([NSClassFromString(@<span class="pl-s"><span class="pl-pds">&quot;</span>NSEvent<span class="pl-pds">&quot;</span></span>) modifierFlags]);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1362" class="blob-num js-line-number" data-line-number="1362"></td>
        <td id="file-gdkevents-quartz-c-LC1362" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1363" class="blob-num js-line-number" data-line-number="1363"></td>
        <td id="file-gdkevents-quartz-c-LC1363" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1364" class="blob-num js-line-number" data-line-number="1364"></td>
        <td id="file-gdkevents-quartz-c-LC1364" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1365" class="blob-num js-line-number" data-line-number="1365"></td>
        <td id="file-gdkevents-quartz-c-LC1365" class="blob-code blob-code-inner js-file-line">      guint carbon_modifiers = <span class="pl-c1">GetCurrentKeyModifiers</span> ();</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1366" class="blob-num js-line-number" data-line-number="1366"></td>
        <td id="file-gdkevents-quartz-c-LC1366" class="blob-code blob-code-inner js-file-line">      GdkModifierType modifiers = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1367" class="blob-num js-line-number" data-line-number="1367"></td>
        <td id="file-gdkevents-quartz-c-LC1367" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1368" class="blob-num js-line-number" data-line-number="1368"></td>
        <td id="file-gdkevents-quartz-c-LC1368" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (carbon_modifiers &amp; alphaLock)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1369" class="blob-num js-line-number" data-line-number="1369"></td>
        <td id="file-gdkevents-quartz-c-LC1369" class="blob-code blob-code-inner js-file-line">        modifiers |= GDK_LOCK_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1370" class="blob-num js-line-number" data-line-number="1370"></td>
        <td id="file-gdkevents-quartz-c-LC1370" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (carbon_modifiers &amp; shiftKey)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1371" class="blob-num js-line-number" data-line-number="1371"></td>
        <td id="file-gdkevents-quartz-c-LC1371" class="blob-code blob-code-inner js-file-line">        modifiers |= GDK_SHIFT_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1372" class="blob-num js-line-number" data-line-number="1372"></td>
        <td id="file-gdkevents-quartz-c-LC1372" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (carbon_modifiers &amp; controlKey)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1373" class="blob-num js-line-number" data-line-number="1373"></td>
        <td id="file-gdkevents-quartz-c-LC1373" class="blob-code blob-code-inner js-file-line">        modifiers |= GDK_CONTROL_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1374" class="blob-num js-line-number" data-line-number="1374"></td>
        <td id="file-gdkevents-quartz-c-LC1374" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (carbon_modifiers &amp; optionKey)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1375" class="blob-num js-line-number" data-line-number="1375"></td>
        <td id="file-gdkevents-quartz-c-LC1375" class="blob-code blob-code-inner js-file-line">        modifiers |= GDK_MOD1_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1376" class="blob-num js-line-number" data-line-number="1376"></td>
        <td id="file-gdkevents-quartz-c-LC1376" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (carbon_modifiers &amp; cmdKey)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1377" class="blob-num js-line-number" data-line-number="1377"></td>
        <td id="file-gdkevents-quartz-c-LC1377" class="blob-code blob-code-inner js-file-line">        modifiers |= GDK_MOD2_MASK;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1378" class="blob-num js-line-number" data-line-number="1378"></td>
        <td id="file-gdkevents-quartz-c-LC1378" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1379" class="blob-num js-line-number" data-line-number="1379"></td>
        <td id="file-gdkevents-quartz-c-LC1379" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> modifiers;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1380" class="blob-num js-line-number" data-line-number="1380"></td>
        <td id="file-gdkevents-quartz-c-LC1380" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1381" class="blob-num js-line-number" data-line-number="1381"></td>
        <td id="file-gdkevents-quartz-c-LC1381" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1382" class="blob-num js-line-number" data-line-number="1382"></td>
        <td id="file-gdkevents-quartz-c-LC1382" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1383" class="blob-num js-line-number" data-line-number="1383"></td>
        <td id="file-gdkevents-quartz-c-LC1383" class="blob-code blob-code-inner js-file-line">GdkModifierType</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1384" class="blob-num js-line-number" data-line-number="1384"></td>
        <td id="file-gdkevents-quartz-c-LC1384" class="blob-code blob-code-inner js-file-line"><span class="pl-en">_gdk_quartz_events_get_current_mouse_modifiers</span> (<span class="pl-k">void</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1385" class="blob-num js-line-number" data-line-number="1385"></td>
        <td id="file-gdkevents-quartz-c-LC1385" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1386" class="blob-num js-line-number" data-line-number="1386"></td>
        <td id="file-gdkevents-quartz-c-LC1386" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (<span class="pl-c1">gdk_quartz_osx_version</span> () &gt;= GDK_OSX_SNOW_LEOPARD)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1387" class="blob-num js-line-number" data-line-number="1387"></td>
        <td id="file-gdkevents-quartz-c-LC1387" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1388" class="blob-num js-line-number" data-line-number="1388"></td>
        <td id="file-gdkevents-quartz-c-LC1388" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> <span class="pl-c1">get_mouse_button_modifiers_from_ns_buttons</span> ([NSClassFromString(@<span class="pl-s"><span class="pl-pds">&quot;</span>NSEvent<span class="pl-pds">&quot;</span></span>) pressedMouseButtons]);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1389" class="blob-num js-line-number" data-line-number="1389"></td>
        <td id="file-gdkevents-quartz-c-LC1389" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1390" class="blob-num js-line-number" data-line-number="1390"></td>
        <td id="file-gdkevents-quartz-c-LC1390" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1391" class="blob-num js-line-number" data-line-number="1391"></td>
        <td id="file-gdkevents-quartz-c-LC1391" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1392" class="blob-num js-line-number" data-line-number="1392"></td>
        <td id="file-gdkevents-quartz-c-LC1392" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> <span class="pl-c1">get_mouse_button_modifiers_from_ns_buttons</span> (<span class="pl-c1">GetCurrentButtonState</span> ());</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1393" class="blob-num js-line-number" data-line-number="1393"></td>
        <td id="file-gdkevents-quartz-c-LC1393" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1394" class="blob-num js-line-number" data-line-number="1394"></td>
        <td id="file-gdkevents-quartz-c-LC1394" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1395" class="blob-num js-line-number" data-line-number="1395"></td>
        <td id="file-gdkevents-quartz-c-LC1395" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1396" class="blob-num js-line-number" data-line-number="1396"></td>
        <td id="file-gdkevents-quartz-c-LC1396" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Detect window resizing <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1397" class="blob-num js-line-number" data-line-number="1397"></td>
        <td id="file-gdkevents-quartz-c-LC1397" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1398" class="blob-num js-line-number" data-line-number="1398"></td>
        <td id="file-gdkevents-quartz-c-LC1398" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> gboolean</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1399" class="blob-num js-line-number" data-line-number="1399"></td>
        <td id="file-gdkevents-quartz-c-LC1399" class="blob-code blob-code-inner js-file-line"><span class="pl-en">test_resize</span> (NSEvent *event, GdkWindow *toplevel, gint x, gint y)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1400" class="blob-num js-line-number" data-line-number="1400"></td>
        <td id="file-gdkevents-quartz-c-LC1400" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1401" class="blob-num js-line-number" data-line-number="1401"></td>
        <td id="file-gdkevents-quartz-c-LC1401" class="blob-code blob-code-inner js-file-line">  GdkWindowImplQuartz *toplevel_impl;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1402" class="blob-num js-line-number" data-line-number="1402"></td>
        <td id="file-gdkevents-quartz-c-LC1402" class="blob-code blob-code-inner js-file-line">  gboolean lion;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1403" class="blob-num js-line-number" data-line-number="1403"></td>
        <td id="file-gdkevents-quartz-c-LC1403" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1404" class="blob-num js-line-number" data-line-number="1404"></td>
        <td id="file-gdkevents-quartz-c-LC1404" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> Resizing from the resize indicator only begins if an NSLeftMouseButton</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1405" class="blob-num js-line-number" data-line-number="1405"></td>
        <td id="file-gdkevents-quartz-c-LC1405" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * event is received in the resizing area.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1406" class="blob-num js-line-number" data-line-number="1406"></td>
        <td id="file-gdkevents-quartz-c-LC1406" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1407" class="blob-num js-line-number" data-line-number="1407"></td>
        <td id="file-gdkevents-quartz-c-LC1407" class="blob-code blob-code-inner js-file-line">  toplevel_impl = (GdkWindowImplQuartz *)toplevel-&gt;<span class="pl-smi">impl</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1408" class="blob-num js-line-number" data-line-number="1408"></td>
        <td id="file-gdkevents-quartz-c-LC1408" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> ([toplevel_impl-&gt;<span class="pl-smi">toplevel</span> showsResizeIndicator])</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1409" class="blob-num js-line-number" data-line-number="1409"></td>
        <td id="file-gdkevents-quartz-c-LC1409" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> ([event type] == NSLeftMouseDown &amp;&amp;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1410" class="blob-num js-line-number" data-line-number="1410"></td>
        <td id="file-gdkevents-quartz-c-LC1410" class="blob-code blob-code-inner js-file-line">      [toplevel_impl-&gt;<span class="pl-smi">toplevel</span> showsResizeIndicator])</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1411" class="blob-num js-line-number" data-line-number="1411"></td>
        <td id="file-gdkevents-quartz-c-LC1411" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1412" class="blob-num js-line-number" data-line-number="1412"></td>
        <td id="file-gdkevents-quartz-c-LC1412" class="blob-code blob-code-inner js-file-line">      NSRect frame;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1413" class="blob-num js-line-number" data-line-number="1413"></td>
        <td id="file-gdkevents-quartz-c-LC1413" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1414" class="blob-num js-line-number" data-line-number="1414"></td>
        <td id="file-gdkevents-quartz-c-LC1414" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> If the resize indicator is visible and the event</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1415" class="blob-num js-line-number" data-line-number="1415"></td>
        <td id="file-gdkevents-quartz-c-LC1415" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * is in the lower right 15x15 corner, we leave these</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1416" class="blob-num js-line-number" data-line-number="1416"></td>
        <td id="file-gdkevents-quartz-c-LC1416" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * events to Cocoa as to be handled as resize events.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1417" class="blob-num js-line-number" data-line-number="1417"></td>
        <td id="file-gdkevents-quartz-c-LC1417" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * Applications may have widgets in this area.  These</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1418" class="blob-num js-line-number" data-line-number="1418"></td>
        <td id="file-gdkevents-quartz-c-LC1418" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * will most likely be larger than 15x15 and for</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1419" class="blob-num js-line-number" data-line-number="1419"></td>
        <td id="file-gdkevents-quartz-c-LC1419" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * scroll bars there are also other means to move</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1420" class="blob-num js-line-number" data-line-number="1420"></td>
        <td id="file-gdkevents-quartz-c-LC1420" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * the scroll bar.  Since the resize indicator is</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1421" class="blob-num js-line-number" data-line-number="1421"></td>
        <td id="file-gdkevents-quartz-c-LC1421" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * the only way of resizing windows on Mac OS, it</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1422" class="blob-num js-line-number" data-line-number="1422"></td>
        <td id="file-gdkevents-quartz-c-LC1422" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * is too important to not make functional.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1423" class="blob-num js-line-number" data-line-number="1423"></td>
        <td id="file-gdkevents-quartz-c-LC1423" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1424" class="blob-num js-line-number" data-line-number="1424"></td>
        <td id="file-gdkevents-quartz-c-LC1424" class="blob-code blob-code-inner js-file-line">      frame = [toplevel_impl-&gt;<span class="pl-smi">view</span> bounds];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1425" class="blob-num js-line-number" data-line-number="1425"></td>
        <td id="file-gdkevents-quartz-c-LC1425" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (x &gt; frame.<span class="pl-smi">size</span>.<span class="pl-smi">width</span> - GRIP_WIDTH &amp;&amp;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1426" class="blob-num js-line-number" data-line-number="1426"></td>
        <td id="file-gdkevents-quartz-c-LC1426" class="blob-code blob-code-inner js-file-line">          x &lt; frame.<span class="pl-smi">size</span>.<span class="pl-smi">width</span> &amp;&amp;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1427" class="blob-num js-line-number" data-line-number="1427"></td>
        <td id="file-gdkevents-quartz-c-LC1427" class="blob-code blob-code-inner js-file-line">          y &gt; frame.<span class="pl-smi">size</span>.<span class="pl-smi">height</span> - GRIP_HEIGHT &amp;&amp;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1428" class="blob-num js-line-number" data-line-number="1428"></td>
        <td id="file-gdkevents-quartz-c-LC1428" class="blob-code blob-code-inner js-file-line">          y &lt; frame.<span class="pl-smi">size</span>.<span class="pl-smi">height</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1429" class="blob-num js-line-number" data-line-number="1429"></td>
        <td id="file-gdkevents-quartz-c-LC1429" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> <span class="pl-c1">TRUE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1430" class="blob-num js-line-number" data-line-number="1430"></td>
        <td id="file-gdkevents-quartz-c-LC1430" class="blob-code blob-code-inner js-file-line">     }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1431" class="blob-num js-line-number" data-line-number="1431"></td>
        <td id="file-gdkevents-quartz-c-LC1431" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1432" class="blob-num js-line-number" data-line-number="1432"></td>
        <td id="file-gdkevents-quartz-c-LC1432" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> If we&#39;re on Lion and within 5 pixels of an edge,</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1433" class="blob-num js-line-number" data-line-number="1433"></td>
        <td id="file-gdkevents-quartz-c-LC1433" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * then assume that the user wants to resize, and</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1434" class="blob-num js-line-number" data-line-number="1434"></td>
        <td id="file-gdkevents-quartz-c-LC1434" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * return NULL to let Quartz get on with it. We check</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1435" class="blob-num js-line-number" data-line-number="1435"></td>
        <td id="file-gdkevents-quartz-c-LC1435" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * the selector isRestorable to see if we&#39;re on 10.7.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1436" class="blob-num js-line-number" data-line-number="1436"></td>
        <td id="file-gdkevents-quartz-c-LC1436" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * This extra check is in case the user starts</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1437" class="blob-num js-line-number" data-line-number="1437"></td>
        <td id="file-gdkevents-quartz-c-LC1437" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * dragging before GDK recognizes the grab.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1438" class="blob-num js-line-number" data-line-number="1438"></td>
        <td id="file-gdkevents-quartz-c-LC1438" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   *</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1439" class="blob-num js-line-number" data-line-number="1439"></td>
        <td id="file-gdkevents-quartz-c-LC1439" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * We perform this check for a button press of all buttons, because we</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1440" class="blob-num js-line-number" data-line-number="1440"></td>
        <td id="file-gdkevents-quartz-c-LC1440" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * do receive, for instance, a right mouse down event for a GDK window</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1441" class="blob-num js-line-number" data-line-number="1441"></td>
        <td id="file-gdkevents-quartz-c-LC1441" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * for x-coordinate range [-3, 0], but we do not want to forward this</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1442" class="blob-num js-line-number" data-line-number="1442"></td>
        <td id="file-gdkevents-quartz-c-LC1442" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * into GDK. Forwarding such events into GDK will confuse the pointer</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1443" class="blob-num js-line-number" data-line-number="1443"></td>
        <td id="file-gdkevents-quartz-c-LC1443" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * window finding code, because there are no GdkWindows present in</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1444" class="blob-num js-line-number" data-line-number="1444"></td>
        <td id="file-gdkevents-quartz-c-LC1444" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * the range [-3, 0].</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1445" class="blob-num js-line-number" data-line-number="1445"></td>
        <td id="file-gdkevents-quartz-c-LC1445" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1446" class="blob-num js-line-number" data-line-number="1446"></td>
        <td id="file-gdkevents-quartz-c-LC1446" class="blob-code blob-code-inner js-file-line">  lion = <span class="pl-c1">gdk_quartz_osx_version</span> () &gt;= GDK_OSX_LION;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1447" class="blob-num js-line-number" data-line-number="1447"></td>
        <td id="file-gdkevents-quartz-c-LC1447" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (lion &amp;&amp;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1448" class="blob-num js-line-number" data-line-number="1448"></td>
        <td id="file-gdkevents-quartz-c-LC1448" class="blob-code blob-code-inner js-file-line">      ([event type] == NSLeftMouseDown ||</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1449" class="blob-num js-line-number" data-line-number="1449"></td>
        <td id="file-gdkevents-quartz-c-LC1449" class="blob-code blob-code-inner js-file-line">       [event type] == NSRightMouseDown ||</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1450" class="blob-num js-line-number" data-line-number="1450"></td>
        <td id="file-gdkevents-quartz-c-LC1450" class="blob-code blob-code-inner js-file-line">       [event type] == NSOtherMouseDown))</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1451" class="blob-num js-line-number" data-line-number="1451"></td>
        <td id="file-gdkevents-quartz-c-LC1451" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1452" class="blob-num js-line-number" data-line-number="1452"></td>
        <td id="file-gdkevents-quartz-c-LC1452" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (x &lt; GDK_LION_RESIZE ||</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1453" class="blob-num js-line-number" data-line-number="1453"></td>
        <td id="file-gdkevents-quartz-c-LC1453" class="blob-code blob-code-inner js-file-line">          x &gt; toplevel-&gt;<span class="pl-smi">width</span> - GDK_LION_RESIZE ||</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1454" class="blob-num js-line-number" data-line-number="1454"></td>
        <td id="file-gdkevents-quartz-c-LC1454" class="blob-code blob-code-inner js-file-line">          y &gt; toplevel-&gt;<span class="pl-smi">height</span> - GDK_LION_RESIZE)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1455" class="blob-num js-line-number" data-line-number="1455"></td>
        <td id="file-gdkevents-quartz-c-LC1455" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> <span class="pl-c1">TRUE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1456" class="blob-num js-line-number" data-line-number="1456"></td>
        <td id="file-gdkevents-quartz-c-LC1456" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1457" class="blob-num js-line-number" data-line-number="1457"></td>
        <td id="file-gdkevents-quartz-c-LC1457" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1458" class="blob-num js-line-number" data-line-number="1458"></td>
        <td id="file-gdkevents-quartz-c-LC1458" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1459" class="blob-num js-line-number" data-line-number="1459"></td>
        <td id="file-gdkevents-quartz-c-LC1459" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1460" class="blob-num js-line-number" data-line-number="1460"></td>
        <td id="file-gdkevents-quartz-c-LC1460" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1461" class="blob-num js-line-number" data-line-number="1461"></td>
        <td id="file-gdkevents-quartz-c-LC1461" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> gboolean</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1462" class="blob-num js-line-number" data-line-number="1462"></td>
        <td id="file-gdkevents-quartz-c-LC1462" class="blob-code blob-code-inner js-file-line"><span class="pl-en">gdk_event_translate</span> (GdkEvent *event,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1463" class="blob-num js-line-number" data-line-number="1463"></td>
        <td id="file-gdkevents-quartz-c-LC1463" class="blob-code blob-code-inner js-file-line">                     NSEvent  *nsevent)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1464" class="blob-num js-line-number" data-line-number="1464"></td>
        <td id="file-gdkevents-quartz-c-LC1464" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1465" class="blob-num js-line-number" data-line-number="1465"></td>
        <td id="file-gdkevents-quartz-c-LC1465" class="blob-code blob-code-inner js-file-line">  NSEventType event_type;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1466" class="blob-num js-line-number" data-line-number="1466"></td>
        <td id="file-gdkevents-quartz-c-LC1466" class="blob-code blob-code-inner js-file-line">  NSWindow *nswindow;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1467" class="blob-num js-line-number" data-line-number="1467"></td>
        <td id="file-gdkevents-quartz-c-LC1467" class="blob-code blob-code-inner js-file-line">  GdkWindow *window;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1468" class="blob-num js-line-number" data-line-number="1468"></td>
        <td id="file-gdkevents-quartz-c-LC1468" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">int</span> x, y;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1469" class="blob-num js-line-number" data-line-number="1469"></td>
        <td id="file-gdkevents-quartz-c-LC1469" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">int</span> x_root, y_root;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1470" class="blob-num js-line-number" data-line-number="1470"></td>
        <td id="file-gdkevents-quartz-c-LC1470" class="blob-code blob-code-inner js-file-line">  gboolean return_val;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1471" class="blob-num js-line-number" data-line-number="1471"></td>
        <td id="file-gdkevents-quartz-c-LC1471" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1472" class="blob-num js-line-number" data-line-number="1472"></td>
        <td id="file-gdkevents-quartz-c-LC1472" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> There is no support for real desktop wide grabs, so we break</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1473" class="blob-num js-line-number" data-line-number="1473"></td>
        <td id="file-gdkevents-quartz-c-LC1473" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * grabs when the application loses focus (gets deactivated).</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1474" class="blob-num js-line-number" data-line-number="1474"></td>
        <td id="file-gdkevents-quartz-c-LC1474" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1475" class="blob-num js-line-number" data-line-number="1475"></td>
        <td id="file-gdkevents-quartz-c-LC1475" class="blob-code blob-code-inner js-file-line">  event_type = [nsevent type];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1476" class="blob-num js-line-number" data-line-number="1476"></td>
        <td id="file-gdkevents-quartz-c-LC1476" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (event_type == NSAppKitDefined)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1477" class="blob-num js-line-number" data-line-number="1477"></td>
        <td id="file-gdkevents-quartz-c-LC1477" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1478" class="blob-num js-line-number" data-line-number="1478"></td>
        <td id="file-gdkevents-quartz-c-LC1478" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> ([nsevent subtype] == NSApplicationDeactivatedEventType)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1479" class="blob-num js-line-number" data-line-number="1479"></td>
        <td id="file-gdkevents-quartz-c-LC1479" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_gdk_quartz_events_break_all_grabs</span> (<span class="pl-c1">get_time_from_ns_event</span> (nsevent));</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1480" class="blob-num js-line-number" data-line-number="1480"></td>
        <td id="file-gdkevents-quartz-c-LC1480" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1481" class="blob-num js-line-number" data-line-number="1481"></td>
        <td id="file-gdkevents-quartz-c-LC1481" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> This could potentially be used to break grabs when clicking</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1482" class="blob-num js-line-number" data-line-number="1482"></td>
        <td id="file-gdkevents-quartz-c-LC1482" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * on the title. The subtype 20 is undocumented so it&#39;s probably</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1483" class="blob-num js-line-number" data-line-number="1483"></td>
        <td id="file-gdkevents-quartz-c-LC1483" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * not a good idea: else if (subtype == 20) break_all_grabs ();</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1484" class="blob-num js-line-number" data-line-number="1484"></td>
        <td id="file-gdkevents-quartz-c-LC1484" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1485" class="blob-num js-line-number" data-line-number="1485"></td>
        <td id="file-gdkevents-quartz-c-LC1485" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1486" class="blob-num js-line-number" data-line-number="1486"></td>
        <td id="file-gdkevents-quartz-c-LC1486" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> Leave all AppKit events to AppKit. <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1487" class="blob-num js-line-number" data-line-number="1487"></td>
        <td id="file-gdkevents-quartz-c-LC1487" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1488" class="blob-num js-line-number" data-line-number="1488"></td>
        <td id="file-gdkevents-quartz-c-LC1488" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1489" class="blob-num js-line-number" data-line-number="1489"></td>
        <td id="file-gdkevents-quartz-c-LC1489" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1490" class="blob-num js-line-number" data-line-number="1490"></td>
        <td id="file-gdkevents-quartz-c-LC1490" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (_gdk_default_filters)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1491" class="blob-num js-line-number" data-line-number="1491"></td>
        <td id="file-gdkevents-quartz-c-LC1491" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1492" class="blob-num js-line-number" data-line-number="1492"></td>
        <td id="file-gdkevents-quartz-c-LC1492" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> Apply global filters <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1493" class="blob-num js-line-number" data-line-number="1493"></td>
        <td id="file-gdkevents-quartz-c-LC1493" class="blob-code blob-code-inner js-file-line">      GdkFilterReturn result;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1494" class="blob-num js-line-number" data-line-number="1494"></td>
        <td id="file-gdkevents-quartz-c-LC1494" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1495" class="blob-num js-line-number" data-line-number="1495"></td>
        <td id="file-gdkevents-quartz-c-LC1495" class="blob-code blob-code-inner js-file-line">      result = <span class="pl-c1">gdk_event_apply_filters</span> (nsevent, event, &amp;_gdk_default_filters);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1496" class="blob-num js-line-number" data-line-number="1496"></td>
        <td id="file-gdkevents-quartz-c-LC1496" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (result != GDK_FILTER_CONTINUE)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1497" class="blob-num js-line-number" data-line-number="1497"></td>
        <td id="file-gdkevents-quartz-c-LC1497" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1498" class="blob-num js-line-number" data-line-number="1498"></td>
        <td id="file-gdkevents-quartz-c-LC1498" class="blob-code blob-code-inner js-file-line">          return_val = (result == GDK_FILTER_TRANSLATE) ? <span class="pl-c1">TRUE</span> : <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1499" class="blob-num js-line-number" data-line-number="1499"></td>
        <td id="file-gdkevents-quartz-c-LC1499" class="blob-code blob-code-inner js-file-line">          <span class="pl-k">goto</span> done;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1500" class="blob-num js-line-number" data-line-number="1500"></td>
        <td id="file-gdkevents-quartz-c-LC1500" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1501" class="blob-num js-line-number" data-line-number="1501"></td>
        <td id="file-gdkevents-quartz-c-LC1501" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1502" class="blob-num js-line-number" data-line-number="1502"></td>
        <td id="file-gdkevents-quartz-c-LC1502" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1503" class="blob-num js-line-number" data-line-number="1503"></td>
        <td id="file-gdkevents-quartz-c-LC1503" class="blob-code blob-code-inner js-file-line">  nswindow = [nsevent window];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1504" class="blob-num js-line-number" data-line-number="1504"></td>
        <td id="file-gdkevents-quartz-c-LC1504" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1505" class="blob-num js-line-number" data-line-number="1505"></td>
        <td id="file-gdkevents-quartz-c-LC1505" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> Ignore events for windows not created by GDK. <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1506" class="blob-num js-line-number" data-line-number="1506"></td>
        <td id="file-gdkevents-quartz-c-LC1506" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (nswindow &amp;&amp; ![[nswindow contentView] isKindOfClass:[GdkQuartzView class]])</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1507" class="blob-num js-line-number" data-line-number="1507"></td>
        <td id="file-gdkevents-quartz-c-LC1507" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1508" class="blob-num js-line-number" data-line-number="1508"></td>
        <td id="file-gdkevents-quartz-c-LC1508" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1509" class="blob-num js-line-number" data-line-number="1509"></td>
        <td id="file-gdkevents-quartz-c-LC1509" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> Ignore events for ones with no windows <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1510" class="blob-num js-line-number" data-line-number="1510"></td>
        <td id="file-gdkevents-quartz-c-LC1510" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (!nswindow)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1511" class="blob-num js-line-number" data-line-number="1511"></td>
        <td id="file-gdkevents-quartz-c-LC1511" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1512" class="blob-num js-line-number" data-line-number="1512"></td>
        <td id="file-gdkevents-quartz-c-LC1512" class="blob-code blob-code-inner js-file-line">      GdkWindow *toplevel = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1513" class="blob-num js-line-number" data-line-number="1513"></td>
        <td id="file-gdkevents-quartz-c-LC1513" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1514" class="blob-num js-line-number" data-line-number="1514"></td>
        <td id="file-gdkevents-quartz-c-LC1514" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (event_type == NSMouseMoved)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1515" class="blob-num js-line-number" data-line-number="1515"></td>
        <td id="file-gdkevents-quartz-c-LC1515" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1516" class="blob-num js-line-number" data-line-number="1516"></td>
        <td id="file-gdkevents-quartz-c-LC1516" class="blob-code blob-code-inner js-file-line">          <span class="pl-c"><span class="pl-c">/*</span> Motion events received after clicking the menu bar do not have the</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1517" class="blob-num js-line-number" data-line-number="1517"></td>
        <td id="file-gdkevents-quartz-c-LC1517" class="blob-code blob-code-inner js-file-line"><span class="pl-c">           * window field set.  Instead of giving up on the event immediately,</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1518" class="blob-num js-line-number" data-line-number="1518"></td>
        <td id="file-gdkevents-quartz-c-LC1518" class="blob-code blob-code-inner js-file-line"><span class="pl-c">           * we first check whether this event is within our window bounds.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1519" class="blob-num js-line-number" data-line-number="1519"></td>
        <td id="file-gdkevents-quartz-c-LC1519" class="blob-code blob-code-inner js-file-line"><span class="pl-c">           <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1520" class="blob-num js-line-number" data-line-number="1520"></td>
        <td id="file-gdkevents-quartz-c-LC1520" class="blob-code blob-code-inner js-file-line">          NSPoint screen_point = [NSEvent mouseLocation];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1521" class="blob-num js-line-number" data-line-number="1521"></td>
        <td id="file-gdkevents-quartz-c-LC1521" class="blob-code blob-code-inner js-file-line">          gint x_tmp, y_tmp;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1522" class="blob-num js-line-number" data-line-number="1522"></td>
        <td id="file-gdkevents-quartz-c-LC1522" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1523" class="blob-num js-line-number" data-line-number="1523"></td>
        <td id="file-gdkevents-quartz-c-LC1523" class="blob-code blob-code-inner js-file-line">          toplevel = <span class="pl-c1">find_toplevel_under_pointer</span> (_gdk_display,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1524" class="blob-num js-line-number" data-line-number="1524"></td>
        <td id="file-gdkevents-quartz-c-LC1524" class="blob-code blob-code-inner js-file-line">                                                  screen_point,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1525" class="blob-num js-line-number" data-line-number="1525"></td>
        <td id="file-gdkevents-quartz-c-LC1525" class="blob-code blob-code-inner js-file-line">                                                  &amp;x_tmp, &amp;y_tmp);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1526" class="blob-num js-line-number" data-line-number="1526"></td>
        <td id="file-gdkevents-quartz-c-LC1526" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1527" class="blob-num js-line-number" data-line-number="1527"></td>
        <td id="file-gdkevents-quartz-c-LC1527" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1528" class="blob-num js-line-number" data-line-number="1528"></td>
        <td id="file-gdkevents-quartz-c-LC1528" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (!toplevel)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1529" class="blob-num js-line-number" data-line-number="1529"></td>
        <td id="file-gdkevents-quartz-c-LC1529" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1530" class="blob-num js-line-number" data-line-number="1530"></td>
        <td id="file-gdkevents-quartz-c-LC1530" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1531" class="blob-num js-line-number" data-line-number="1531"></td>
        <td id="file-gdkevents-quartz-c-LC1531" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1532" class="blob-num js-line-number" data-line-number="1532"></td>
        <td id="file-gdkevents-quartz-c-LC1532" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> Ignore events and break grabs while the window is being</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1533" class="blob-num js-line-number" data-line-number="1533"></td>
        <td id="file-gdkevents-quartz-c-LC1533" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * dragged. This is a workaround for the window getting events for</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1534" class="blob-num js-line-number" data-line-number="1534"></td>
        <td id="file-gdkevents-quartz-c-LC1534" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * the window title.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1535" class="blob-num js-line-number" data-line-number="1535"></td>
        <td id="file-gdkevents-quartz-c-LC1535" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1536" class="blob-num js-line-number" data-line-number="1536"></td>
        <td id="file-gdkevents-quartz-c-LC1536" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> ([(GdkQuartzNSWindow *)nswindow isInMove])</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1537" class="blob-num js-line-number" data-line-number="1537"></td>
        <td id="file-gdkevents-quartz-c-LC1537" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1538" class="blob-num js-line-number" data-line-number="1538"></td>
        <td id="file-gdkevents-quartz-c-LC1538" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">_gdk_quartz_events_break_all_grabs</span> (<span class="pl-c1">get_time_from_ns_event</span> (nsevent));</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1539" class="blob-num js-line-number" data-line-number="1539"></td>
        <td id="file-gdkevents-quartz-c-LC1539" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1540" class="blob-num js-line-number" data-line-number="1540"></td>
        <td id="file-gdkevents-quartz-c-LC1540" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1541" class="blob-num js-line-number" data-line-number="1541"></td>
        <td id="file-gdkevents-quartz-c-LC1541" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1542" class="blob-num js-line-number" data-line-number="1542"></td>
        <td id="file-gdkevents-quartz-c-LC1542" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> Also when in a manual resize or move , we ignore events so that</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1543" class="blob-num js-line-number" data-line-number="1543"></td>
        <td id="file-gdkevents-quartz-c-LC1543" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * these are pushed to GdkQuartzNSWindow&#39;s sendEvent handler.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1544" class="blob-num js-line-number" data-line-number="1544"></td>
        <td id="file-gdkevents-quartz-c-LC1544" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1545" class="blob-num js-line-number" data-line-number="1545"></td>
        <td id="file-gdkevents-quartz-c-LC1545" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> ([(GdkQuartzNSWindow *)nswindow isInManualResizeOrMove])</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1546" class="blob-num js-line-number" data-line-number="1546"></td>
        <td id="file-gdkevents-quartz-c-LC1546" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1547" class="blob-num js-line-number" data-line-number="1547"></td>
        <td id="file-gdkevents-quartz-c-LC1547" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1548" class="blob-num js-line-number" data-line-number="1548"></td>
        <td id="file-gdkevents-quartz-c-LC1548" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> Find the right GDK window to send the event to, taking grabs and</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1549" class="blob-num js-line-number" data-line-number="1549"></td>
        <td id="file-gdkevents-quartz-c-LC1549" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * event masks into consideration.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1550" class="blob-num js-line-number" data-line-number="1550"></td>
        <td id="file-gdkevents-quartz-c-LC1550" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1551" class="blob-num js-line-number" data-line-number="1551"></td>
        <td id="file-gdkevents-quartz-c-LC1551" class="blob-code blob-code-inner js-file-line">  window = <span class="pl-c1">find_window_for_ns_event</span> (nsevent, &amp;x, &amp;y, &amp;x_root, &amp;y_root);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1552" class="blob-num js-line-number" data-line-number="1552"></td>
        <td id="file-gdkevents-quartz-c-LC1552" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (!window)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1553" class="blob-num js-line-number" data-line-number="1553"></td>
        <td id="file-gdkevents-quartz-c-LC1553" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1554" class="blob-num js-line-number" data-line-number="1554"></td>
        <td id="file-gdkevents-quartz-c-LC1554" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1555" class="blob-num js-line-number" data-line-number="1555"></td>
        <td id="file-gdkevents-quartz-c-LC1555" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> Quartz handles resizing on its own, so we want to stay out of the way. <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1556" class="blob-num js-line-number" data-line-number="1556"></td>
        <td id="file-gdkevents-quartz-c-LC1556" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (<span class="pl-c1">test_resize</span> (nsevent, window, x, y))</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1557" class="blob-num js-line-number" data-line-number="1557"></td>
        <td id="file-gdkevents-quartz-c-LC1557" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1558" class="blob-num js-line-number" data-line-number="1558"></td>
        <td id="file-gdkevents-quartz-c-LC1558" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1559" class="blob-num js-line-number" data-line-number="1559"></td>
        <td id="file-gdkevents-quartz-c-LC1559" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> Apply any window filters. <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1560" class="blob-num js-line-number" data-line-number="1560"></td>
        <td id="file-gdkevents-quartz-c-LC1560" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (<span class="pl-c1">GDK_IS_WINDOW</span> (window))</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1561" class="blob-num js-line-number" data-line-number="1561"></td>
        <td id="file-gdkevents-quartz-c-LC1561" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1562" class="blob-num js-line-number" data-line-number="1562"></td>
        <td id="file-gdkevents-quartz-c-LC1562" class="blob-code blob-code-inner js-file-line">      GdkFilterReturn result;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1563" class="blob-num js-line-number" data-line-number="1563"></td>
        <td id="file-gdkevents-quartz-c-LC1563" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1564" class="blob-num js-line-number" data-line-number="1564"></td>
        <td id="file-gdkevents-quartz-c-LC1564" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (window-&gt;<span class="pl-smi">filters</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1565" class="blob-num js-line-number" data-line-number="1565"></td>
        <td id="file-gdkevents-quartz-c-LC1565" class="blob-code blob-code-inner js-file-line">	{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1566" class="blob-num js-line-number" data-line-number="1566"></td>
        <td id="file-gdkevents-quartz-c-LC1566" class="blob-code blob-code-inner js-file-line">	  <span class="pl-c1">g_object_ref</span> (window);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1567" class="blob-num js-line-number" data-line-number="1567"></td>
        <td id="file-gdkevents-quartz-c-LC1567" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1568" class="blob-num js-line-number" data-line-number="1568"></td>
        <td id="file-gdkevents-quartz-c-LC1568" class="blob-code blob-code-inner js-file-line">	  result = <span class="pl-c1">gdk_event_apply_filters</span> (nsevent, event, &amp;window-&gt;<span class="pl-smi">filters</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1569" class="blob-num js-line-number" data-line-number="1569"></td>
        <td id="file-gdkevents-quartz-c-LC1569" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1570" class="blob-num js-line-number" data-line-number="1570"></td>
        <td id="file-gdkevents-quartz-c-LC1570" class="blob-code blob-code-inner js-file-line">	  <span class="pl-c1">g_object_unref</span> (window);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1571" class="blob-num js-line-number" data-line-number="1571"></td>
        <td id="file-gdkevents-quartz-c-LC1571" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1572" class="blob-num js-line-number" data-line-number="1572"></td>
        <td id="file-gdkevents-quartz-c-LC1572" class="blob-code blob-code-inner js-file-line">	  <span class="pl-k">if</span> (result != GDK_FILTER_CONTINUE)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1573" class="blob-num js-line-number" data-line-number="1573"></td>
        <td id="file-gdkevents-quartz-c-LC1573" class="blob-code blob-code-inner js-file-line">	    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1574" class="blob-num js-line-number" data-line-number="1574"></td>
        <td id="file-gdkevents-quartz-c-LC1574" class="blob-code blob-code-inner js-file-line">	      return_val = (result == GDK_FILTER_TRANSLATE) ? <span class="pl-c1">TRUE</span> : <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1575" class="blob-num js-line-number" data-line-number="1575"></td>
        <td id="file-gdkevents-quartz-c-LC1575" class="blob-code blob-code-inner js-file-line">	      <span class="pl-k">goto</span> done;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1576" class="blob-num js-line-number" data-line-number="1576"></td>
        <td id="file-gdkevents-quartz-c-LC1576" class="blob-code blob-code-inner js-file-line">	    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1577" class="blob-num js-line-number" data-line-number="1577"></td>
        <td id="file-gdkevents-quartz-c-LC1577" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1578" class="blob-num js-line-number" data-line-number="1578"></td>
        <td id="file-gdkevents-quartz-c-LC1578" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1579" class="blob-num js-line-number" data-line-number="1579"></td>
        <td id="file-gdkevents-quartz-c-LC1579" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1580" class="blob-num js-line-number" data-line-number="1580"></td>
        <td id="file-gdkevents-quartz-c-LC1580" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> If the app is not active leave the event to AppKit so the window gets</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1581" class="blob-num js-line-number" data-line-number="1581"></td>
        <td id="file-gdkevents-quartz-c-LC1581" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * focused correctly and don&#39;t do click-through (so we behave like most</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1582" class="blob-num js-line-number" data-line-number="1582"></td>
        <td id="file-gdkevents-quartz-c-LC1582" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * native apps). If the app is active, we focus the window and then handle</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1583" class="blob-num js-line-number" data-line-number="1583"></td>
        <td id="file-gdkevents-quartz-c-LC1583" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   * the event, also to match native apps.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1584" class="blob-num js-line-number" data-line-number="1584"></td>
        <td id="file-gdkevents-quartz-c-LC1584" class="blob-code blob-code-inner js-file-line"><span class="pl-c">   <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1585" class="blob-num js-line-number" data-line-number="1585"></td>
        <td id="file-gdkevents-quartz-c-LC1585" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> ((event_type == NSRightMouseDown ||</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1586" class="blob-num js-line-number" data-line-number="1586"></td>
        <td id="file-gdkevents-quartz-c-LC1586" class="blob-code blob-code-inner js-file-line">       event_type == NSOtherMouseDown ||</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1587" class="blob-num js-line-number" data-line-number="1587"></td>
        <td id="file-gdkevents-quartz-c-LC1587" class="blob-code blob-code-inner js-file-line">       event_type == NSLeftMouseDown))</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1588" class="blob-num js-line-number" data-line-number="1588"></td>
        <td id="file-gdkevents-quartz-c-LC1588" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1589" class="blob-num js-line-number" data-line-number="1589"></td>
        <td id="file-gdkevents-quartz-c-LC1589" class="blob-code blob-code-inner js-file-line">      GdkWindowImplQuartz *impl = <span class="pl-c1">GDK_WINDOW_IMPL_QUARTZ</span> (window-&gt;<span class="pl-smi">impl</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1590" class="blob-num js-line-number" data-line-number="1590"></td>
        <td id="file-gdkevents-quartz-c-LC1590" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1591" class="blob-num js-line-number" data-line-number="1591"></td>
        <td id="file-gdkevents-quartz-c-LC1591" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (![NSApp isActive])</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1592" class="blob-num js-line-number" data-line-number="1592"></td>
        <td id="file-gdkevents-quartz-c-LC1592" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1593" class="blob-num js-line-number" data-line-number="1593"></td>
        <td id="file-gdkevents-quartz-c-LC1593" class="blob-code blob-code-inner js-file-line">          [NSApp activateIgnoringOtherApps:YES];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1594" class="blob-num js-line-number" data-line-number="1594"></td>
        <td id="file-gdkevents-quartz-c-LC1594" class="blob-code blob-code-inner js-file-line">          <span class="pl-k">return</span> <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1595" class="blob-num js-line-number" data-line-number="1595"></td>
        <td id="file-gdkevents-quartz-c-LC1595" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1596" class="blob-num js-line-number" data-line-number="1596"></td>
        <td id="file-gdkevents-quartz-c-LC1596" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">else</span> <span class="pl-k">if</span> (![impl-&gt;<span class="pl-smi">toplevel</span> isKeyWindow])</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1597" class="blob-num js-line-number" data-line-number="1597"></td>
        <td id="file-gdkevents-quartz-c-LC1597" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1598" class="blob-num js-line-number" data-line-number="1598"></td>
        <td id="file-gdkevents-quartz-c-LC1598" class="blob-code blob-code-inner js-file-line">          GdkDeviceGrabInfo *grab;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1599" class="blob-num js-line-number" data-line-number="1599"></td>
        <td id="file-gdkevents-quartz-c-LC1599" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1600" class="blob-num js-line-number" data-line-number="1600"></td>
        <td id="file-gdkevents-quartz-c-LC1600" class="blob-code blob-code-inner js-file-line">          grab = <span class="pl-c1">_gdk_display_get_last_device_grab</span> (_gdk_display,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1601" class="blob-num js-line-number" data-line-number="1601"></td>
        <td id="file-gdkevents-quartz-c-LC1601" class="blob-code blob-code-inner js-file-line">                                                    <span class="pl-c1">GDK_QUARTZ_DEVICE_MANAGER_CORE</span> (_gdk_display-&gt;<span class="pl-smi">device_manager</span>)-&gt;<span class="pl-smi">core_pointer</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1602" class="blob-num js-line-number" data-line-number="1602"></td>
        <td id="file-gdkevents-quartz-c-LC1602" class="blob-code blob-code-inner js-file-line">          <span class="pl-k">if</span> (!grab)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1603" class="blob-num js-line-number" data-line-number="1603"></td>
        <td id="file-gdkevents-quartz-c-LC1603" class="blob-code blob-code-inner js-file-line">            [impl-&gt;<span class="pl-smi">toplevel</span> makeKeyWindow];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1604" class="blob-num js-line-number" data-line-number="1604"></td>
        <td id="file-gdkevents-quartz-c-LC1604" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1605" class="blob-num js-line-number" data-line-number="1605"></td>
        <td id="file-gdkevents-quartz-c-LC1605" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1606" class="blob-num js-line-number" data-line-number="1606"></td>
        <td id="file-gdkevents-quartz-c-LC1606" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1607" class="blob-num js-line-number" data-line-number="1607"></td>
        <td id="file-gdkevents-quartz-c-LC1607" class="blob-code blob-code-inner js-file-line">  return_val = <span class="pl-c1">TRUE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1608" class="blob-num js-line-number" data-line-number="1608"></td>
        <td id="file-gdkevents-quartz-c-LC1608" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1609" class="blob-num js-line-number" data-line-number="1609"></td>
        <td id="file-gdkevents-quartz-c-LC1609" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">switch</span> (event_type)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1610" class="blob-num js-line-number" data-line-number="1610"></td>
        <td id="file-gdkevents-quartz-c-LC1610" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1611" class="blob-num js-line-number" data-line-number="1611"></td>
        <td id="file-gdkevents-quartz-c-LC1611" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSLeftMouseDown:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1612" class="blob-num js-line-number" data-line-number="1612"></td>
        <td id="file-gdkevents-quartz-c-LC1612" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSRightMouseDown:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1613" class="blob-num js-line-number" data-line-number="1613"></td>
        <td id="file-gdkevents-quartz-c-LC1613" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSOtherMouseDown:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1614" class="blob-num js-line-number" data-line-number="1614"></td>
        <td id="file-gdkevents-quartz-c-LC1614" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSLeftMouseUp:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1615" class="blob-num js-line-number" data-line-number="1615"></td>
        <td id="file-gdkevents-quartz-c-LC1615" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSRightMouseUp:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1616" class="blob-num js-line-number" data-line-number="1616"></td>
        <td id="file-gdkevents-quartz-c-LC1616" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSOtherMouseUp:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1617" class="blob-num js-line-number" data-line-number="1617"></td>
        <td id="file-gdkevents-quartz-c-LC1617" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">fill_button_event</span> (window, event, nsevent, x, y, x_root, y_root);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1618" class="blob-num js-line-number" data-line-number="1618"></td>
        <td id="file-gdkevents-quartz-c-LC1618" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1619" class="blob-num js-line-number" data-line-number="1619"></td>
        <td id="file-gdkevents-quartz-c-LC1619" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1620" class="blob-num js-line-number" data-line-number="1620"></td>
        <td id="file-gdkevents-quartz-c-LC1620" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSLeftMouseDragged:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1621" class="blob-num js-line-number" data-line-number="1621"></td>
        <td id="file-gdkevents-quartz-c-LC1621" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSRightMouseDragged:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1622" class="blob-num js-line-number" data-line-number="1622"></td>
        <td id="file-gdkevents-quartz-c-LC1622" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSOtherMouseDragged:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1623" class="blob-num js-line-number" data-line-number="1623"></td>
        <td id="file-gdkevents-quartz-c-LC1623" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSMouseMoved:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1624" class="blob-num js-line-number" data-line-number="1624"></td>
        <td id="file-gdkevents-quartz-c-LC1624" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">fill_motion_event</span> (window, event, nsevent, x, y, x_root, y_root);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1625" class="blob-num js-line-number" data-line-number="1625"></td>
        <td id="file-gdkevents-quartz-c-LC1625" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1626" class="blob-num js-line-number" data-line-number="1626"></td>
        <td id="file-gdkevents-quartz-c-LC1626" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1627" class="blob-num js-line-number" data-line-number="1627"></td>
        <td id="file-gdkevents-quartz-c-LC1627" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSScrollWheel:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1628" class="blob-num js-line-number" data-line-number="1628"></td>
        <td id="file-gdkevents-quartz-c-LC1628" class="blob-code blob-code-inner js-file-line">      {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1629" class="blob-num js-line-number" data-line-number="1629"></td>
        <td id="file-gdkevents-quartz-c-LC1629" class="blob-code blob-code-inner js-file-line">        GdkScrollDirection direction;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1630" class="blob-num js-line-number" data-line-number="1630"></td>
        <td id="file-gdkevents-quartz-c-LC1630" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">float</span> dx;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1631" class="blob-num js-line-number" data-line-number="1631"></td>
        <td id="file-gdkevents-quartz-c-LC1631" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">float</span> dy;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1632" class="blob-num js-line-number" data-line-number="1632"></td>
        <td id="file-gdkevents-quartz-c-LC1632" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1633" class="blob-num js-line-number" data-line-number="1633"></td>
        <td id="file-gdkevents-quartz-c-LC1633" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">gdk_quartz_osx_version</span>() &gt;= GDK_OSX_LION &amp;&amp;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1634" class="blob-num js-line-number" data-line-number="1634"></td>
        <td id="file-gdkevents-quartz-c-LC1634" class="blob-code blob-code-inner js-file-line">	    [nsevent hasPreciseScrollingDeltas])</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1635" class="blob-num js-line-number" data-line-number="1635"></td>
        <td id="file-gdkevents-quartz-c-LC1635" class="blob-code blob-code-inner js-file-line">	  {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1636" class="blob-num js-line-number" data-line-number="1636"></td>
        <td id="file-gdkevents-quartz-c-LC1636" class="blob-code blob-code-inner js-file-line">	    dx = [nsevent scrollingDeltaX];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1637" class="blob-num js-line-number" data-line-number="1637"></td>
        <td id="file-gdkevents-quartz-c-LC1637" class="blob-code blob-code-inner js-file-line">	    dy = [nsevent scrollingDeltaY];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1638" class="blob-num js-line-number" data-line-number="1638"></td>
        <td id="file-gdkevents-quartz-c-LC1638" class="blob-code blob-code-inner js-file-line">            direction = GDK_SCROLL_SMOOTH;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1639" class="blob-num js-line-number" data-line-number="1639"></td>
        <td id="file-gdkevents-quartz-c-LC1639" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1640" class="blob-num js-line-number" data-line-number="1640"></td>
        <td id="file-gdkevents-quartz-c-LC1640" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">fill_scroll_event</span> (window, event, nsevent, x, y, x_root, y_root,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1641" class="blob-num js-line-number" data-line-number="1641"></td>
        <td id="file-gdkevents-quartz-c-LC1641" class="blob-code blob-code-inner js-file-line">                               -dx, -dy, direction);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1642" class="blob-num js-line-number" data-line-number="1642"></td>
        <td id="file-gdkevents-quartz-c-LC1642" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1643" class="blob-num js-line-number" data-line-number="1643"></td>
        <td id="file-gdkevents-quartz-c-LC1643" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">/*</span> Fall through for scroll buttons emulation <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1644" class="blob-num js-line-number" data-line-number="1644"></td>
        <td id="file-gdkevents-quartz-c-LC1644" class="blob-code blob-code-inner js-file-line">	  }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1645" class="blob-num js-line-number" data-line-number="1645"></td>
        <td id="file-gdkevents-quartz-c-LC1645" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1646" class="blob-num js-line-number" data-line-number="1646"></td>
        <td id="file-gdkevents-quartz-c-LC1646" class="blob-code blob-code-inner js-file-line">        dx = [nsevent deltaX];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1647" class="blob-num js-line-number" data-line-number="1647"></td>
        <td id="file-gdkevents-quartz-c-LC1647" class="blob-code blob-code-inner js-file-line">        dy = [nsevent deltaY];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1648" class="blob-num js-line-number" data-line-number="1648"></td>
        <td id="file-gdkevents-quartz-c-LC1648" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1649" class="blob-num js-line-number" data-line-number="1649"></td>
        <td id="file-gdkevents-quartz-c-LC1649" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (dy != <span class="pl-c1">0.0</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1650" class="blob-num js-line-number" data-line-number="1650"></td>
        <td id="file-gdkevents-quartz-c-LC1650" class="blob-code blob-code-inner js-file-line">          {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1651" class="blob-num js-line-number" data-line-number="1651"></td>
        <td id="file-gdkevents-quartz-c-LC1651" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span> (dy &lt; <span class="pl-c1">0.0</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1652" class="blob-num js-line-number" data-line-number="1652"></td>
        <td id="file-gdkevents-quartz-c-LC1652" class="blob-code blob-code-inner js-file-line">              direction = GDK_SCROLL_DOWN;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1653" class="blob-num js-line-number" data-line-number="1653"></td>
        <td id="file-gdkevents-quartz-c-LC1653" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1654" class="blob-num js-line-number" data-line-number="1654"></td>
        <td id="file-gdkevents-quartz-c-LC1654" class="blob-code blob-code-inner js-file-line">              direction = GDK_SCROLL_UP;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1655" class="blob-num js-line-number" data-line-number="1655"></td>
        <td id="file-gdkevents-quartz-c-LC1655" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1656" class="blob-num js-line-number" data-line-number="1656"></td>
        <td id="file-gdkevents-quartz-c-LC1656" class="blob-code blob-code-inner js-file-line">            dy = <span class="pl-c1">fabs</span> (dy);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1657" class="blob-num js-line-number" data-line-number="1657"></td>
        <td id="file-gdkevents-quartz-c-LC1657" class="blob-code blob-code-inner js-file-line">            dx = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1658" class="blob-num js-line-number" data-line-number="1658"></td>
        <td id="file-gdkevents-quartz-c-LC1658" class="blob-code blob-code-inner js-file-line">          }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1659" class="blob-num js-line-number" data-line-number="1659"></td>
        <td id="file-gdkevents-quartz-c-LC1659" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> <span class="pl-k">if</span> (dx != <span class="pl-c1">0.0</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1660" class="blob-num js-line-number" data-line-number="1660"></td>
        <td id="file-gdkevents-quartz-c-LC1660" class="blob-code blob-code-inner js-file-line">          {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1661" class="blob-num js-line-number" data-line-number="1661"></td>
        <td id="file-gdkevents-quartz-c-LC1661" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span> (dx &lt; <span class="pl-c1">0.0</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1662" class="blob-num js-line-number" data-line-number="1662"></td>
        <td id="file-gdkevents-quartz-c-LC1662" class="blob-code blob-code-inner js-file-line">              direction = GDK_SCROLL_RIGHT;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1663" class="blob-num js-line-number" data-line-number="1663"></td>
        <td id="file-gdkevents-quartz-c-LC1663" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1664" class="blob-num js-line-number" data-line-number="1664"></td>
        <td id="file-gdkevents-quartz-c-LC1664" class="blob-code blob-code-inner js-file-line">              direction = GDK_SCROLL_LEFT;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1665" class="blob-num js-line-number" data-line-number="1665"></td>
        <td id="file-gdkevents-quartz-c-LC1665" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1666" class="blob-num js-line-number" data-line-number="1666"></td>
        <td id="file-gdkevents-quartz-c-LC1666" class="blob-code blob-code-inner js-file-line">            dx = <span class="pl-c1">fabs</span> (dx);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1667" class="blob-num js-line-number" data-line-number="1667"></td>
        <td id="file-gdkevents-quartz-c-LC1667" class="blob-code blob-code-inner js-file-line">            dy = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1668" class="blob-num js-line-number" data-line-number="1668"></td>
        <td id="file-gdkevents-quartz-c-LC1668" class="blob-code blob-code-inner js-file-line">          }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1669" class="blob-num js-line-number" data-line-number="1669"></td>
        <td id="file-gdkevents-quartz-c-LC1669" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1670" class="blob-num js-line-number" data-line-number="1670"></td>
        <td id="file-gdkevents-quartz-c-LC1670" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (dx != <span class="pl-c1">0.0</span> || dy != <span class="pl-c1">0.0</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1671" class="blob-num js-line-number" data-line-number="1671"></td>
        <td id="file-gdkevents-quartz-c-LC1671" class="blob-code blob-code-inner js-file-line">          {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1672" class="blob-num js-line-number" data-line-number="1672"></td>
        <td id="file-gdkevents-quartz-c-LC1672" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1673" class="blob-num js-line-number" data-line-number="1673"></td>
        <td id="file-gdkevents-quartz-c-LC1673" class="blob-code blob-code-inner js-file-line">	    <span class="pl-k">if</span> (<span class="pl-c1">gdk_quartz_osx_version</span>() &gt;= GDK_OSX_LION &amp;&amp;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1674" class="blob-num js-line-number" data-line-number="1674"></td>
        <td id="file-gdkevents-quartz-c-LC1674" class="blob-code blob-code-inner js-file-line">		[nsevent hasPreciseScrollingDeltas])</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1675" class="blob-num js-line-number" data-line-number="1675"></td>
        <td id="file-gdkevents-quartz-c-LC1675" class="blob-code blob-code-inner js-file-line">              {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1676" class="blob-num js-line-number" data-line-number="1676"></td>
        <td id="file-gdkevents-quartz-c-LC1676" class="blob-code blob-code-inner js-file-line">                GdkEvent *emulated_event;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1677" class="blob-num js-line-number" data-line-number="1677"></td>
        <td id="file-gdkevents-quartz-c-LC1677" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1678" class="blob-num js-line-number" data-line-number="1678"></td>
        <td id="file-gdkevents-quartz-c-LC1678" class="blob-code blob-code-inner js-file-line">                emulated_event = <span class="pl-c1">gdk_event_new</span> (GDK_SCROLL);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1679" class="blob-num js-line-number" data-line-number="1679"></td>
        <td id="file-gdkevents-quartz-c-LC1679" class="blob-code blob-code-inner js-file-line">                <span class="pl-c1">_gdk_event_set_pointer_emulated</span> (emulated_event, <span class="pl-c1">TRUE</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1680" class="blob-num js-line-number" data-line-number="1680"></td>
        <td id="file-gdkevents-quartz-c-LC1680" class="blob-code blob-code-inner js-file-line">                <span class="pl-c1">fill_scroll_event</span> (window, emulated_event, nsevent,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1681" class="blob-num js-line-number" data-line-number="1681"></td>
        <td id="file-gdkevents-quartz-c-LC1681" class="blob-code blob-code-inner js-file-line">                                   x, y, x_root, y_root,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1682" class="blob-num js-line-number" data-line-number="1682"></td>
        <td id="file-gdkevents-quartz-c-LC1682" class="blob-code blob-code-inner js-file-line">                                   dx, dy, direction);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1683" class="blob-num js-line-number" data-line-number="1683"></td>
        <td id="file-gdkevents-quartz-c-LC1683" class="blob-code blob-code-inner js-file-line">                <span class="pl-c1">append_event</span> (emulated_event, <span class="pl-c1">TRUE</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1684" class="blob-num js-line-number" data-line-number="1684"></td>
        <td id="file-gdkevents-quartz-c-LC1684" class="blob-code blob-code-inner js-file-line">              }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1685" class="blob-num js-line-number" data-line-number="1685"></td>
        <td id="file-gdkevents-quartz-c-LC1685" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1686" class="blob-num js-line-number" data-line-number="1686"></td>
        <td id="file-gdkevents-quartz-c-LC1686" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1687" class="blob-num js-line-number" data-line-number="1687"></td>
        <td id="file-gdkevents-quartz-c-LC1687" class="blob-code blob-code-inner js-file-line">              <span class="pl-c1">fill_scroll_event</span> (window, event, nsevent,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1688" class="blob-num js-line-number" data-line-number="1688"></td>
        <td id="file-gdkevents-quartz-c-LC1688" class="blob-code blob-code-inner js-file-line">                                 x, y, x_root, y_root,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1689" class="blob-num js-line-number" data-line-number="1689"></td>
        <td id="file-gdkevents-quartz-c-LC1689" class="blob-code blob-code-inner js-file-line">                                 dx, dy, direction);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1690" class="blob-num js-line-number" data-line-number="1690"></td>
        <td id="file-gdkevents-quartz-c-LC1690" class="blob-code blob-code-inner js-file-line">          }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1691" class="blob-num js-line-number" data-line-number="1691"></td>
        <td id="file-gdkevents-quartz-c-LC1691" class="blob-code blob-code-inner js-file-line">      }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1692" class="blob-num js-line-number" data-line-number="1692"></td>
        <td id="file-gdkevents-quartz-c-LC1692" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1693" class="blob-num js-line-number" data-line-number="1693"></td>
        <td id="file-gdkevents-quartz-c-LC1693" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> AVAILABLE_MAC_OS_X_VERSION_10_8_AND_LATER</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1694" class="blob-num js-line-number" data-line-number="1694"></td>
        <td id="file-gdkevents-quartz-c-LC1694" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSEventTypeMagnify:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1695" class="blob-num js-line-number" data-line-number="1695"></td>
        <td id="file-gdkevents-quartz-c-LC1695" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSEventTypeRotate:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1696" class="blob-num js-line-number" data-line-number="1696"></td>
        <td id="file-gdkevents-quartz-c-LC1696" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> Event handling requires [NSEvent phase] which was introduced in 10.7 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1697" class="blob-num js-line-number" data-line-number="1697"></td>
        <td id="file-gdkevents-quartz-c-LC1697" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> However - Tests on 10.7 showed that phase property does not work     <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1698" class="blob-num js-line-number" data-line-number="1698"></td>
        <td id="file-gdkevents-quartz-c-LC1698" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (<span class="pl-c1">gdk_quartz_osx_version</span> () &gt;= GDK_OSX_MOUNTAIN_LION)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1699" class="blob-num js-line-number" data-line-number="1699"></td>
        <td id="file-gdkevents-quartz-c-LC1699" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">fill_pinch_event</span> (window, event, nsevent, x, y, x_root, y_root);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1700" class="blob-num js-line-number" data-line-number="1700"></td>
        <td id="file-gdkevents-quartz-c-LC1700" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1701" class="blob-num js-line-number" data-line-number="1701"></td>
        <td id="file-gdkevents-quartz-c-LC1701" class="blob-code blob-code-inner js-file-line">        return_val = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1702" class="blob-num js-line-number" data-line-number="1702"></td>
        <td id="file-gdkevents-quartz-c-LC1702" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1703" class="blob-num js-line-number" data-line-number="1703"></td>
        <td id="file-gdkevents-quartz-c-LC1703" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1704" class="blob-num js-line-number" data-line-number="1704"></td>
        <td id="file-gdkevents-quartz-c-LC1704" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSMouseExited:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1705" class="blob-num js-line-number" data-line-number="1705"></td>
        <td id="file-gdkevents-quartz-c-LC1705" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (<span class="pl-c1">WINDOW_IS_TOPLEVEL</span> (window))</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1706" class="blob-num js-line-number" data-line-number="1706"></td>
        <td id="file-gdkevents-quartz-c-LC1706" class="blob-code blob-code-inner js-file-line">          [[NSCursor arrowCursor] set];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1707" class="blob-num js-line-number" data-line-number="1707"></td>
        <td id="file-gdkevents-quartz-c-LC1707" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> fall through <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1708" class="blob-num js-line-number" data-line-number="1708"></td>
        <td id="file-gdkevents-quartz-c-LC1708" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSMouseEntered:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1709" class="blob-num js-line-number" data-line-number="1709"></td>
        <td id="file-gdkevents-quartz-c-LC1709" class="blob-code blob-code-inner js-file-line">      return_val = <span class="pl-c1">synthesize_crossing_event</span> (window, event, nsevent, x, y, x_root, y_root);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1710" class="blob-num js-line-number" data-line-number="1710"></td>
        <td id="file-gdkevents-quartz-c-LC1710" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1711" class="blob-num js-line-number" data-line-number="1711"></td>
        <td id="file-gdkevents-quartz-c-LC1711" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1712" class="blob-num js-line-number" data-line-number="1712"></td>
        <td id="file-gdkevents-quartz-c-LC1712" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSKeyDown:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1713" class="blob-num js-line-number" data-line-number="1713"></td>
        <td id="file-gdkevents-quartz-c-LC1713" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSKeyUp:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1714" class="blob-num js-line-number" data-line-number="1714"></td>
        <td id="file-gdkevents-quartz-c-LC1714" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSFlagsChanged:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1715" class="blob-num js-line-number" data-line-number="1715"></td>
        <td id="file-gdkevents-quartz-c-LC1715" class="blob-code blob-code-inner js-file-line">      {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1716" class="blob-num js-line-number" data-line-number="1716"></td>
        <td id="file-gdkevents-quartz-c-LC1716" class="blob-code blob-code-inner js-file-line">        GdkEventType type;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1717" class="blob-num js-line-number" data-line-number="1717"></td>
        <td id="file-gdkevents-quartz-c-LC1717" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1718" class="blob-num js-line-number" data-line-number="1718"></td>
        <td id="file-gdkevents-quartz-c-LC1718" class="blob-code blob-code-inner js-file-line">        type = <span class="pl-c1">_gdk_quartz_keys_event_type</span> (nsevent);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1719" class="blob-num js-line-number" data-line-number="1719"></td>
        <td id="file-gdkevents-quartz-c-LC1719" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (type == GDK_NOTHING)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1720" class="blob-num js-line-number" data-line-number="1720"></td>
        <td id="file-gdkevents-quartz-c-LC1720" class="blob-code blob-code-inner js-file-line">          return_val = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1721" class="blob-num js-line-number" data-line-number="1721"></td>
        <td id="file-gdkevents-quartz-c-LC1721" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1722" class="blob-num js-line-number" data-line-number="1722"></td>
        <td id="file-gdkevents-quartz-c-LC1722" class="blob-code blob-code-inner js-file-line">          <span class="pl-c1">fill_key_event</span> (window, event, nsevent, type);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1723" class="blob-num js-line-number" data-line-number="1723"></td>
        <td id="file-gdkevents-quartz-c-LC1723" class="blob-code blob-code-inner js-file-line">      }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1724" class="blob-num js-line-number" data-line-number="1724"></td>
        <td id="file-gdkevents-quartz-c-LC1724" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1725" class="blob-num js-line-number" data-line-number="1725"></td>
        <td id="file-gdkevents-quartz-c-LC1725" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1726" class="blob-num js-line-number" data-line-number="1726"></td>
        <td id="file-gdkevents-quartz-c-LC1726" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> NSTabletProximity:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1727" class="blob-num js-line-number" data-line-number="1727"></td>
        <td id="file-gdkevents-quartz-c-LC1727" class="blob-code blob-code-inner js-file-line">      _gdk_quartz_device_manager_core_device_for_ns_event</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1728" class="blob-num js-line-number" data-line-number="1728"></td>
        <td id="file-gdkevents-quartz-c-LC1728" class="blob-code blob-code-inner js-file-line">        (</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1729" class="blob-num js-line-number" data-line-number="1729"></td>
        <td id="file-gdkevents-quartz-c-LC1729" class="blob-code blob-code-inner js-file-line">         <span class="pl-c1">gdk_display_get_device_manager</span> (_gdk_display),</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1730" class="blob-num js-line-number" data-line-number="1730"></td>
        <td id="file-gdkevents-quartz-c-LC1730" class="blob-code blob-code-inner js-file-line">         nsevent</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1731" class="blob-num js-line-number" data-line-number="1731"></td>
        <td id="file-gdkevents-quartz-c-LC1731" class="blob-code blob-code-inner js-file-line">        );</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1732" class="blob-num js-line-number" data-line-number="1732"></td>
        <td id="file-gdkevents-quartz-c-LC1732" class="blob-code blob-code-inner js-file-line">      return_val = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1733" class="blob-num js-line-number" data-line-number="1733"></td>
        <td id="file-gdkevents-quartz-c-LC1733" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1734" class="blob-num js-line-number" data-line-number="1734"></td>
        <td id="file-gdkevents-quartz-c-LC1734" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1735" class="blob-num js-line-number" data-line-number="1735"></td>
        <td id="file-gdkevents-quartz-c-LC1735" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">default</span>:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1736" class="blob-num js-line-number" data-line-number="1736"></td>
        <td id="file-gdkevents-quartz-c-LC1736" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> Ignore everything elsee. <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1737" class="blob-num js-line-number" data-line-number="1737"></td>
        <td id="file-gdkevents-quartz-c-LC1737" class="blob-code blob-code-inner js-file-line">      return_val = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1738" class="blob-num js-line-number" data-line-number="1738"></td>
        <td id="file-gdkevents-quartz-c-LC1738" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1739" class="blob-num js-line-number" data-line-number="1739"></td>
        <td id="file-gdkevents-quartz-c-LC1739" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1740" class="blob-num js-line-number" data-line-number="1740"></td>
        <td id="file-gdkevents-quartz-c-LC1740" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1741" class="blob-num js-line-number" data-line-number="1741"></td>
        <td id="file-gdkevents-quartz-c-LC1741" class="blob-code blob-code-inner js-file-line"> done:</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1742" class="blob-num js-line-number" data-line-number="1742"></td>
        <td id="file-gdkevents-quartz-c-LC1742" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (return_val)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1743" class="blob-num js-line-number" data-line-number="1743"></td>
        <td id="file-gdkevents-quartz-c-LC1743" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1744" class="blob-num js-line-number" data-line-number="1744"></td>
        <td id="file-gdkevents-quartz-c-LC1744" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">window</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1745" class="blob-num js-line-number" data-line-number="1745"></td>
        <td id="file-gdkevents-quartz-c-LC1745" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">g_object_ref</span> (event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">window</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1746" class="blob-num js-line-number" data-line-number="1746"></td>
        <td id="file-gdkevents-quartz-c-LC1746" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (((event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">type</span> == GDK_ENTER_NOTIFY) ||</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1747" class="blob-num js-line-number" data-line-number="1747"></td>
        <td id="file-gdkevents-quartz-c-LC1747" class="blob-code blob-code-inner js-file-line">	   (event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">type</span> == GDK_LEAVE_NOTIFY)) &amp;&amp;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1748" class="blob-num js-line-number" data-line-number="1748"></td>
        <td id="file-gdkevents-quartz-c-LC1748" class="blob-code blob-code-inner js-file-line">	  (event-&gt;<span class="pl-smi">crossing</span>.<span class="pl-smi">subwindow</span> != <span class="pl-c1">NULL</span>))</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1749" class="blob-num js-line-number" data-line-number="1749"></td>
        <td id="file-gdkevents-quartz-c-LC1749" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">g_object_ref</span> (event-&gt;<span class="pl-smi">crossing</span>.<span class="pl-smi">subwindow</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1750" class="blob-num js-line-number" data-line-number="1750"></td>
        <td id="file-gdkevents-quartz-c-LC1750" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1751" class="blob-num js-line-number" data-line-number="1751"></td>
        <td id="file-gdkevents-quartz-c-LC1751" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1752" class="blob-num js-line-number" data-line-number="1752"></td>
        <td id="file-gdkevents-quartz-c-LC1752" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1753" class="blob-num js-line-number" data-line-number="1753"></td>
        <td id="file-gdkevents-quartz-c-LC1753" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> Mark this event as having no resources to be freed <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1754" class="blob-num js-line-number" data-line-number="1754"></td>
        <td id="file-gdkevents-quartz-c-LC1754" class="blob-code blob-code-inner js-file-line">      event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">window</span> = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1755" class="blob-num js-line-number" data-line-number="1755"></td>
        <td id="file-gdkevents-quartz-c-LC1755" class="blob-code blob-code-inner js-file-line">      event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">type</span> = GDK_NOTHING;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1756" class="blob-num js-line-number" data-line-number="1756"></td>
        <td id="file-gdkevents-quartz-c-LC1756" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1757" class="blob-num js-line-number" data-line-number="1757"></td>
        <td id="file-gdkevents-quartz-c-LC1757" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1758" class="blob-num js-line-number" data-line-number="1758"></td>
        <td id="file-gdkevents-quartz-c-LC1758" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> return_val;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1759" class="blob-num js-line-number" data-line-number="1759"></td>
        <td id="file-gdkevents-quartz-c-LC1759" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1760" class="blob-num js-line-number" data-line-number="1760"></td>
        <td id="file-gdkevents-quartz-c-LC1760" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1761" class="blob-num js-line-number" data-line-number="1761"></td>
        <td id="file-gdkevents-quartz-c-LC1761" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1762" class="blob-num js-line-number" data-line-number="1762"></td>
        <td id="file-gdkevents-quartz-c-LC1762" class="blob-code blob-code-inner js-file-line"><span class="pl-en">_gdk_quartz_display_queue_events</span> (GdkDisplay *display)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1763" class="blob-num js-line-number" data-line-number="1763"></td>
        <td id="file-gdkevents-quartz-c-LC1763" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1764" class="blob-num js-line-number" data-line-number="1764"></td>
        <td id="file-gdkevents-quartz-c-LC1764" class="blob-code blob-code-inner js-file-line">  NSEvent *nsevent;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1765" class="blob-num js-line-number" data-line-number="1765"></td>
        <td id="file-gdkevents-quartz-c-LC1765" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1766" class="blob-num js-line-number" data-line-number="1766"></td>
        <td id="file-gdkevents-quartz-c-LC1766" class="blob-code blob-code-inner js-file-line">  nsevent = <span class="pl-c1">_gdk_quartz_event_loop_get_pending</span> ();</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1767" class="blob-num js-line-number" data-line-number="1767"></td>
        <td id="file-gdkevents-quartz-c-LC1767" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (nsevent)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1768" class="blob-num js-line-number" data-line-number="1768"></td>
        <td id="file-gdkevents-quartz-c-LC1768" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1769" class="blob-num js-line-number" data-line-number="1769"></td>
        <td id="file-gdkevents-quartz-c-LC1769" class="blob-code blob-code-inner js-file-line">      GdkEvent *event;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1770" class="blob-num js-line-number" data-line-number="1770"></td>
        <td id="file-gdkevents-quartz-c-LC1770" class="blob-code blob-code-inner js-file-line">      GList *node;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1771" class="blob-num js-line-number" data-line-number="1771"></td>
        <td id="file-gdkevents-quartz-c-LC1771" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1772" class="blob-num js-line-number" data-line-number="1772"></td>
        <td id="file-gdkevents-quartz-c-LC1772" class="blob-code blob-code-inner js-file-line">      event = <span class="pl-c1">gdk_event_new</span> (GDK_NOTHING);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1773" class="blob-num js-line-number" data-line-number="1773"></td>
        <td id="file-gdkevents-quartz-c-LC1773" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1774" class="blob-num js-line-number" data-line-number="1774"></td>
        <td id="file-gdkevents-quartz-c-LC1774" class="blob-code blob-code-inner js-file-line">      event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">window</span> = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1775" class="blob-num js-line-number" data-line-number="1775"></td>
        <td id="file-gdkevents-quartz-c-LC1775" class="blob-code blob-code-inner js-file-line">      event-&gt;<span class="pl-smi">any</span>.<span class="pl-smi">send_event</span> = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1776" class="blob-num js-line-number" data-line-number="1776"></td>
        <td id="file-gdkevents-quartz-c-LC1776" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1777" class="blob-num js-line-number" data-line-number="1777"></td>
        <td id="file-gdkevents-quartz-c-LC1777" class="blob-code blob-code-inner js-file-line">      ((GdkEventPrivate *)event)-&gt;<span class="pl-smi">flags</span> |= GDK_EVENT_PENDING;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1778" class="blob-num js-line-number" data-line-number="1778"></td>
        <td id="file-gdkevents-quartz-c-LC1778" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1779" class="blob-num js-line-number" data-line-number="1779"></td>
        <td id="file-gdkevents-quartz-c-LC1779" class="blob-code blob-code-inner js-file-line">      node = <span class="pl-c1">_gdk_event_queue_append</span> (display, event);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1780" class="blob-num js-line-number" data-line-number="1780"></td>
        <td id="file-gdkevents-quartz-c-LC1780" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1781" class="blob-num js-line-number" data-line-number="1781"></td>
        <td id="file-gdkevents-quartz-c-LC1781" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (<span class="pl-c1">gdk_event_translate</span> (event, nsevent))</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1782" class="blob-num js-line-number" data-line-number="1782"></td>
        <td id="file-gdkevents-quartz-c-LC1782" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1783" class="blob-num js-line-number" data-line-number="1783"></td>
        <td id="file-gdkevents-quartz-c-LC1783" class="blob-code blob-code-inner js-file-line">	  ((GdkEventPrivate *)event)-&gt;<span class="pl-smi">flags</span> &amp;= ~GDK_EVENT_PENDING;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1784" class="blob-num js-line-number" data-line-number="1784"></td>
        <td id="file-gdkevents-quartz-c-LC1784" class="blob-code blob-code-inner js-file-line">          <span class="pl-c1">_gdk_windowing_got_event</span> (display, node, event, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1785" class="blob-num js-line-number" data-line-number="1785"></td>
        <td id="file-gdkevents-quartz-c-LC1785" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1786" class="blob-num js-line-number" data-line-number="1786"></td>
        <td id="file-gdkevents-quartz-c-LC1786" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1787" class="blob-num js-line-number" data-line-number="1787"></td>
        <td id="file-gdkevents-quartz-c-LC1787" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1788" class="blob-num js-line-number" data-line-number="1788"></td>
        <td id="file-gdkevents-quartz-c-LC1788" class="blob-code blob-code-inner js-file-line">	  <span class="pl-c1">_gdk_event_queue_remove_link</span> (display, node);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1789" class="blob-num js-line-number" data-line-number="1789"></td>
        <td id="file-gdkevents-quartz-c-LC1789" class="blob-code blob-code-inner js-file-line">	  <span class="pl-c1">g_list_free_1</span> (node);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1790" class="blob-num js-line-number" data-line-number="1790"></td>
        <td id="file-gdkevents-quartz-c-LC1790" class="blob-code blob-code-inner js-file-line">	  <span class="pl-c1">gdk_event_free</span> (event);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1791" class="blob-num js-line-number" data-line-number="1791"></td>
        <td id="file-gdkevents-quartz-c-LC1791" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1792" class="blob-num js-line-number" data-line-number="1792"></td>
        <td id="file-gdkevents-quartz-c-LC1792" class="blob-code blob-code-inner js-file-line">          <span class="pl-c1">gdk_threads_leave</span> ();</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1793" class="blob-num js-line-number" data-line-number="1793"></td>
        <td id="file-gdkevents-quartz-c-LC1793" class="blob-code blob-code-inner js-file-line">          [NSApp sendEvent:nsevent];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1794" class="blob-num js-line-number" data-line-number="1794"></td>
        <td id="file-gdkevents-quartz-c-LC1794" class="blob-code blob-code-inner js-file-line">          <span class="pl-c1">gdk_threads_enter</span> ();</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1795" class="blob-num js-line-number" data-line-number="1795"></td>
        <td id="file-gdkevents-quartz-c-LC1795" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1796" class="blob-num js-line-number" data-line-number="1796"></td>
        <td id="file-gdkevents-quartz-c-LC1796" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1797" class="blob-num js-line-number" data-line-number="1797"></td>
        <td id="file-gdkevents-quartz-c-LC1797" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">_gdk_quartz_event_loop_release_event</span> (nsevent);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1798" class="blob-num js-line-number" data-line-number="1798"></td>
        <td id="file-gdkevents-quartz-c-LC1798" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1799" class="blob-num js-line-number" data-line-number="1799"></td>
        <td id="file-gdkevents-quartz-c-LC1799" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1800" class="blob-num js-line-number" data-line-number="1800"></td>
        <td id="file-gdkevents-quartz-c-LC1800" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1801" class="blob-num js-line-number" data-line-number="1801"></td>
        <td id="file-gdkevents-quartz-c-LC1801" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1802" class="blob-num js-line-number" data-line-number="1802"></td>
        <td id="file-gdkevents-quartz-c-LC1802" class="blob-code blob-code-inner js-file-line"><span class="pl-en">_gdk_quartz_screen_broadcast_client_message</span> (GdkScreen *screen,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1803" class="blob-num js-line-number" data-line-number="1803"></td>
        <td id="file-gdkevents-quartz-c-LC1803" class="blob-code blob-code-inner js-file-line">                                             GdkEvent  *event)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1804" class="blob-num js-line-number" data-line-number="1804"></td>
        <td id="file-gdkevents-quartz-c-LC1804" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1805" class="blob-num js-line-number" data-line-number="1805"></td>
        <td id="file-gdkevents-quartz-c-LC1805" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> Not supported. <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1806" class="blob-num js-line-number" data-line-number="1806"></td>
        <td id="file-gdkevents-quartz-c-LC1806" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1807" class="blob-num js-line-number" data-line-number="1807"></td>
        <td id="file-gdkevents-quartz-c-LC1807" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1808" class="blob-num js-line-number" data-line-number="1808"></td>
        <td id="file-gdkevents-quartz-c-LC1808" class="blob-code blob-code-inner js-file-line">gboolean</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1809" class="blob-num js-line-number" data-line-number="1809"></td>
        <td id="file-gdkevents-quartz-c-LC1809" class="blob-code blob-code-inner js-file-line"><span class="pl-en">_gdk_quartz_screen_get_setting</span> (GdkScreen   *screen,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1810" class="blob-num js-line-number" data-line-number="1810"></td>
        <td id="file-gdkevents-quartz-c-LC1810" class="blob-code blob-code-inner js-file-line">                                <span class="pl-k">const</span> gchar *name,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1811" class="blob-num js-line-number" data-line-number="1811"></td>
        <td id="file-gdkevents-quartz-c-LC1811" class="blob-code blob-code-inner js-file-line">                                GValue      *value)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1812" class="blob-num js-line-number" data-line-number="1812"></td>
        <td id="file-gdkevents-quartz-c-LC1812" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1813" class="blob-num js-line-number" data-line-number="1813"></td>
        <td id="file-gdkevents-quartz-c-LC1813" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (<span class="pl-c1">strcmp</span> (name, <span class="pl-s"><span class="pl-pds">&quot;</span>gtk-double-click-time<span class="pl-pds">&quot;</span></span>) == <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1814" class="blob-num js-line-number" data-line-number="1814"></td>
        <td id="file-gdkevents-quartz-c-LC1814" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1815" class="blob-num js-line-number" data-line-number="1815"></td>
        <td id="file-gdkevents-quartz-c-LC1815" class="blob-code blob-code-inner js-file-line">      NSUserDefaults *defaults;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1816" class="blob-num js-line-number" data-line-number="1816"></td>
        <td id="file-gdkevents-quartz-c-LC1816" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">float</span> t;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1817" class="blob-num js-line-number" data-line-number="1817"></td>
        <td id="file-gdkevents-quartz-c-LC1817" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1818" class="blob-num js-line-number" data-line-number="1818"></td>
        <td id="file-gdkevents-quartz-c-LC1818" class="blob-code blob-code-inner js-file-line">      GDK_QUARTZ_ALLOC_POOL;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1819" class="blob-num js-line-number" data-line-number="1819"></td>
        <td id="file-gdkevents-quartz-c-LC1819" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1820" class="blob-num js-line-number" data-line-number="1820"></td>
        <td id="file-gdkevents-quartz-c-LC1820" class="blob-code blob-code-inner js-file-line">      defaults = [NSUserDefaults standardUserDefaults];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1821" class="blob-num js-line-number" data-line-number="1821"></td>
        <td id="file-gdkevents-quartz-c-LC1821" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1822" class="blob-num js-line-number" data-line-number="1822"></td>
        <td id="file-gdkevents-quartz-c-LC1822" class="blob-code blob-code-inner js-file-line">      t = [defaults floatForKey:@<span class="pl-s"><span class="pl-pds">&quot;</span>com.apple.mouse.doubleClickThreshold<span class="pl-pds">&quot;</span></span>];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1823" class="blob-num js-line-number" data-line-number="1823"></td>
        <td id="file-gdkevents-quartz-c-LC1823" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (t == <span class="pl-c1">0.0</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1824" class="blob-num js-line-number" data-line-number="1824"></td>
        <td id="file-gdkevents-quartz-c-LC1824" class="blob-code blob-code-inner js-file-line">	{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1825" class="blob-num js-line-number" data-line-number="1825"></td>
        <td id="file-gdkevents-quartz-c-LC1825" class="blob-code blob-code-inner js-file-line">	  <span class="pl-c"><span class="pl-c">/*</span> No user setting, use the default in OS X. <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1826" class="blob-num js-line-number" data-line-number="1826"></td>
        <td id="file-gdkevents-quartz-c-LC1826" class="blob-code blob-code-inner js-file-line">	  t = <span class="pl-c1">0.5</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1827" class="blob-num js-line-number" data-line-number="1827"></td>
        <td id="file-gdkevents-quartz-c-LC1827" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1828" class="blob-num js-line-number" data-line-number="1828"></td>
        <td id="file-gdkevents-quartz-c-LC1828" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1829" class="blob-num js-line-number" data-line-number="1829"></td>
        <td id="file-gdkevents-quartz-c-LC1829" class="blob-code blob-code-inner js-file-line">      GDK_QUARTZ_RELEASE_POOL;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1830" class="blob-num js-line-number" data-line-number="1830"></td>
        <td id="file-gdkevents-quartz-c-LC1830" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1831" class="blob-num js-line-number" data-line-number="1831"></td>
        <td id="file-gdkevents-quartz-c-LC1831" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">g_value_set_int</span> (value, t * <span class="pl-c1">1000</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1832" class="blob-num js-line-number" data-line-number="1832"></td>
        <td id="file-gdkevents-quartz-c-LC1832" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1833" class="blob-num js-line-number" data-line-number="1833"></td>
        <td id="file-gdkevents-quartz-c-LC1833" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> <span class="pl-c1">TRUE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1834" class="blob-num js-line-number" data-line-number="1834"></td>
        <td id="file-gdkevents-quartz-c-LC1834" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1835" class="blob-num js-line-number" data-line-number="1835"></td>
        <td id="file-gdkevents-quartz-c-LC1835" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">else</span> <span class="pl-k">if</span> (<span class="pl-c1">strcmp</span> (name, <span class="pl-s"><span class="pl-pds">&quot;</span>gtk-font-name<span class="pl-pds">&quot;</span></span>) == <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1836" class="blob-num js-line-number" data-line-number="1836"></td>
        <td id="file-gdkevents-quartz-c-LC1836" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1837" class="blob-num js-line-number" data-line-number="1837"></td>
        <td id="file-gdkevents-quartz-c-LC1837" class="blob-code blob-code-inner js-file-line">      NSString *name;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1838" class="blob-num js-line-number" data-line-number="1838"></td>
        <td id="file-gdkevents-quartz-c-LC1838" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">char</span> *str;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1839" class="blob-num js-line-number" data-line-number="1839"></td>
        <td id="file-gdkevents-quartz-c-LC1839" class="blob-code blob-code-inner js-file-line">      gint size;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1840" class="blob-num js-line-number" data-line-number="1840"></td>
        <td id="file-gdkevents-quartz-c-LC1840" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1841" class="blob-num js-line-number" data-line-number="1841"></td>
        <td id="file-gdkevents-quartz-c-LC1841" class="blob-code blob-code-inner js-file-line">      GDK_QUARTZ_ALLOC_POOL;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1842" class="blob-num js-line-number" data-line-number="1842"></td>
        <td id="file-gdkevents-quartz-c-LC1842" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1843" class="blob-num js-line-number" data-line-number="1843"></td>
        <td id="file-gdkevents-quartz-c-LC1843" class="blob-code blob-code-inner js-file-line">      name = [[NSFont systemFontOfSize:<span class="pl-c1">0</span>] familyName];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1844" class="blob-num js-line-number" data-line-number="1844"></td>
        <td id="file-gdkevents-quartz-c-LC1844" class="blob-code blob-code-inner js-file-line">      size = (gint)[[NSFont userFontOfSize:<span class="pl-c1">0</span>] pointSize];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1845" class="blob-num js-line-number" data-line-number="1845"></td>
        <td id="file-gdkevents-quartz-c-LC1845" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1846" class="blob-num js-line-number" data-line-number="1846"></td>
        <td id="file-gdkevents-quartz-c-LC1846" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> Let&#39;s try to use the &quot;views&quot; font size (12pt) by default. This is</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1847" class="blob-num js-line-number" data-line-number="1847"></td>
        <td id="file-gdkevents-quartz-c-LC1847" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * used for lists/text/other &quot;content&quot; which is the largest parts of</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1848" class="blob-num js-line-number" data-line-number="1848"></td>
        <td id="file-gdkevents-quartz-c-LC1848" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * apps, using the &quot;regular control&quot; size (13pt) looks a bit out of</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1849" class="blob-num js-line-number" data-line-number="1849"></td>
        <td id="file-gdkevents-quartz-c-LC1849" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * place. We might have to tweak this.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1850" class="blob-num js-line-number" data-line-number="1850"></td>
        <td id="file-gdkevents-quartz-c-LC1850" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1851" class="blob-num js-line-number" data-line-number="1851"></td>
        <td id="file-gdkevents-quartz-c-LC1851" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1852" class="blob-num js-line-number" data-line-number="1852"></td>
        <td id="file-gdkevents-quartz-c-LC1852" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> The size has to be hardcoded as there doesn&#39;t seem to be a way to</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1853" class="blob-num js-line-number" data-line-number="1853"></td>
        <td id="file-gdkevents-quartz-c-LC1853" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       * get the views font size programmatically.</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1854" class="blob-num js-line-number" data-line-number="1854"></td>
        <td id="file-gdkevents-quartz-c-LC1854" class="blob-code blob-code-inner js-file-line"><span class="pl-c">       <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1855" class="blob-num js-line-number" data-line-number="1855"></td>
        <td id="file-gdkevents-quartz-c-LC1855" class="blob-code blob-code-inner js-file-line">      str = <span class="pl-c1">g_strdup_printf</span> (<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span> <span class="pl-c1">%d</span><span class="pl-pds">&quot;</span></span>, [name UTF8String], size);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1856" class="blob-num js-line-number" data-line-number="1856"></td>
        <td id="file-gdkevents-quartz-c-LC1856" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">g_value_set_string</span> (value, str);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1857" class="blob-num js-line-number" data-line-number="1857"></td>
        <td id="file-gdkevents-quartz-c-LC1857" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">g_free</span> (str);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1858" class="blob-num js-line-number" data-line-number="1858"></td>
        <td id="file-gdkevents-quartz-c-LC1858" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1859" class="blob-num js-line-number" data-line-number="1859"></td>
        <td id="file-gdkevents-quartz-c-LC1859" class="blob-code blob-code-inner js-file-line">      GDK_QUARTZ_RELEASE_POOL;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1860" class="blob-num js-line-number" data-line-number="1860"></td>
        <td id="file-gdkevents-quartz-c-LC1860" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1861" class="blob-num js-line-number" data-line-number="1861"></td>
        <td id="file-gdkevents-quartz-c-LC1861" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> <span class="pl-c1">TRUE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1862" class="blob-num js-line-number" data-line-number="1862"></td>
        <td id="file-gdkevents-quartz-c-LC1862" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1863" class="blob-num js-line-number" data-line-number="1863"></td>
        <td id="file-gdkevents-quartz-c-LC1863" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">else</span> <span class="pl-k">if</span> (<span class="pl-c1">strcmp</span> (name, <span class="pl-s"><span class="pl-pds">&quot;</span>gtk-primary-button-warps-slider<span class="pl-pds">&quot;</span></span>) == <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1864" class="blob-num js-line-number" data-line-number="1864"></td>
        <td id="file-gdkevents-quartz-c-LC1864" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1865" class="blob-num js-line-number" data-line-number="1865"></td>
        <td id="file-gdkevents-quartz-c-LC1865" class="blob-code blob-code-inner js-file-line">      GDK_QUARTZ_ALLOC_POOL;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1866" class="blob-num js-line-number" data-line-number="1866"></td>
        <td id="file-gdkevents-quartz-c-LC1866" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1867" class="blob-num js-line-number" data-line-number="1867"></td>
        <td id="file-gdkevents-quartz-c-LC1867" class="blob-code blob-code-inner js-file-line">      BOOL setting = [[NSUserDefaults standardUserDefaults] boolForKey:@<span class="pl-s"><span class="pl-pds">&quot;</span>AppleScrollerPagingBehavior<span class="pl-pds">&quot;</span></span>];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1868" class="blob-num js-line-number" data-line-number="1868"></td>
        <td id="file-gdkevents-quartz-c-LC1868" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1869" class="blob-num js-line-number" data-line-number="1869"></td>
        <td id="file-gdkevents-quartz-c-LC1869" class="blob-code blob-code-inner js-file-line">      <span class="pl-c"><span class="pl-c">/*</span> If the Apple property is YES, it means &quot;warp&quot; <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1870" class="blob-num js-line-number" data-line-number="1870"></td>
        <td id="file-gdkevents-quartz-c-LC1870" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">g_value_set_boolean</span> (value, setting == YES);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1871" class="blob-num js-line-number" data-line-number="1871"></td>
        <td id="file-gdkevents-quartz-c-LC1871" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1872" class="blob-num js-line-number" data-line-number="1872"></td>
        <td id="file-gdkevents-quartz-c-LC1872" class="blob-code blob-code-inner js-file-line">      GDK_QUARTZ_RELEASE_POOL;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1873" class="blob-num js-line-number" data-line-number="1873"></td>
        <td id="file-gdkevents-quartz-c-LC1873" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1874" class="blob-num js-line-number" data-line-number="1874"></td>
        <td id="file-gdkevents-quartz-c-LC1874" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> <span class="pl-c1">TRUE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1875" class="blob-num js-line-number" data-line-number="1875"></td>
        <td id="file-gdkevents-quartz-c-LC1875" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1876" class="blob-num js-line-number" data-line-number="1876"></td>
        <td id="file-gdkevents-quartz-c-LC1876" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">else</span> <span class="pl-k">if</span> (<span class="pl-c1">strcmp</span> (name, <span class="pl-s"><span class="pl-pds">&quot;</span>gtk-shell-shows-desktop<span class="pl-pds">&quot;</span></span>) == <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1877" class="blob-num js-line-number" data-line-number="1877"></td>
        <td id="file-gdkevents-quartz-c-LC1877" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1878" class="blob-num js-line-number" data-line-number="1878"></td>
        <td id="file-gdkevents-quartz-c-LC1878" class="blob-code blob-code-inner js-file-line">      GDK_QUARTZ_ALLOC_POOL;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1879" class="blob-num js-line-number" data-line-number="1879"></td>
        <td id="file-gdkevents-quartz-c-LC1879" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1880" class="blob-num js-line-number" data-line-number="1880"></td>
        <td id="file-gdkevents-quartz-c-LC1880" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">g_value_set_boolean</span> (value, <span class="pl-c1">TRUE</span>);</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1881" class="blob-num js-line-number" data-line-number="1881"></td>
        <td id="file-gdkevents-quartz-c-LC1881" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1882" class="blob-num js-line-number" data-line-number="1882"></td>
        <td id="file-gdkevents-quartz-c-LC1882" class="blob-code blob-code-inner js-file-line">      GDK_QUARTZ_RELEASE_POOL;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1883" class="blob-num js-line-number" data-line-number="1883"></td>
        <td id="file-gdkevents-quartz-c-LC1883" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1884" class="blob-num js-line-number" data-line-number="1884"></td>
        <td id="file-gdkevents-quartz-c-LC1884" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> <span class="pl-c1">TRUE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1885" class="blob-num js-line-number" data-line-number="1885"></td>
        <td id="file-gdkevents-quartz-c-LC1885" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1886" class="blob-num js-line-number" data-line-number="1886"></td>
        <td id="file-gdkevents-quartz-c-LC1886" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1887" class="blob-num js-line-number" data-line-number="1887"></td>
        <td id="file-gdkevents-quartz-c-LC1887" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">/*</span> FIXME: Add more settings <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1888" class="blob-num js-line-number" data-line-number="1888"></td>
        <td id="file-gdkevents-quartz-c-LC1888" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1889" class="blob-num js-line-number" data-line-number="1889"></td>
        <td id="file-gdkevents-quartz-c-LC1889" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1890" class="blob-num js-line-number" data-line-number="1890"></td>
        <td id="file-gdkevents-quartz-c-LC1890" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1891" class="blob-num js-line-number" data-line-number="1891"></td>
        <td id="file-gdkevents-quartz-c-LC1891" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1892" class="blob-num js-line-number" data-line-number="1892"></td>
        <td id="file-gdkevents-quartz-c-LC1892" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1893" class="blob-num js-line-number" data-line-number="1893"></td>
        <td id="file-gdkevents-quartz-c-LC1893" class="blob-code blob-code-inner js-file-line"><span class="pl-en">_gdk_quartz_display_event_data_copy</span> (GdkDisplay     *display,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1894" class="blob-num js-line-number" data-line-number="1894"></td>
        <td id="file-gdkevents-quartz-c-LC1894" class="blob-code blob-code-inner js-file-line">                                     <span class="pl-k">const</span> GdkEvent *src,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1895" class="blob-num js-line-number" data-line-number="1895"></td>
        <td id="file-gdkevents-quartz-c-LC1895" class="blob-code blob-code-inner js-file-line">                                     GdkEvent       *dst)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1896" class="blob-num js-line-number" data-line-number="1896"></td>
        <td id="file-gdkevents-quartz-c-LC1896" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1897" class="blob-num js-line-number" data-line-number="1897"></td>
        <td id="file-gdkevents-quartz-c-LC1897" class="blob-code blob-code-inner js-file-line">  GdkEventPrivate *priv_src = (GdkEventPrivate *) src;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1898" class="blob-num js-line-number" data-line-number="1898"></td>
        <td id="file-gdkevents-quartz-c-LC1898" class="blob-code blob-code-inner js-file-line">  GdkEventPrivate *priv_dst = (GdkEventPrivate *) dst;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1899" class="blob-num js-line-number" data-line-number="1899"></td>
        <td id="file-gdkevents-quartz-c-LC1899" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1900" class="blob-num js-line-number" data-line-number="1900"></td>
        <td id="file-gdkevents-quartz-c-LC1900" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (priv_src-&gt;<span class="pl-smi">windowing_data</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1901" class="blob-num js-line-number" data-line-number="1901"></td>
        <td id="file-gdkevents-quartz-c-LC1901" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1902" class="blob-num js-line-number" data-line-number="1902"></td>
        <td id="file-gdkevents-quartz-c-LC1902" class="blob-code blob-code-inner js-file-line">      priv_dst-&gt;<span class="pl-smi">windowing_data</span> = priv_src-&gt;<span class="pl-smi">windowing_data</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1903" class="blob-num js-line-number" data-line-number="1903"></td>
        <td id="file-gdkevents-quartz-c-LC1903" class="blob-code blob-code-inner js-file-line">      [(NSEvent *)priv_dst-&gt;<span class="pl-smi">windowing_data</span> retain];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1904" class="blob-num js-line-number" data-line-number="1904"></td>
        <td id="file-gdkevents-quartz-c-LC1904" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1905" class="blob-num js-line-number" data-line-number="1905"></td>
        <td id="file-gdkevents-quartz-c-LC1905" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1906" class="blob-num js-line-number" data-line-number="1906"></td>
        <td id="file-gdkevents-quartz-c-LC1906" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1907" class="blob-num js-line-number" data-line-number="1907"></td>
        <td id="file-gdkevents-quartz-c-LC1907" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1908" class="blob-num js-line-number" data-line-number="1908"></td>
        <td id="file-gdkevents-quartz-c-LC1908" class="blob-code blob-code-inner js-file-line"><span class="pl-en">_gdk_quartz_display_event_data_free</span> (GdkDisplay *display,</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1909" class="blob-num js-line-number" data-line-number="1909"></td>
        <td id="file-gdkevents-quartz-c-LC1909" class="blob-code blob-code-inner js-file-line">                                     GdkEvent   *event)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1910" class="blob-num js-line-number" data-line-number="1910"></td>
        <td id="file-gdkevents-quartz-c-LC1910" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1911" class="blob-num js-line-number" data-line-number="1911"></td>
        <td id="file-gdkevents-quartz-c-LC1911" class="blob-code blob-code-inner js-file-line">  GdkEventPrivate *priv = (GdkEventPrivate *) event;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1912" class="blob-num js-line-number" data-line-number="1912"></td>
        <td id="file-gdkevents-quartz-c-LC1912" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1913" class="blob-num js-line-number" data-line-number="1913"></td>
        <td id="file-gdkevents-quartz-c-LC1913" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (priv-&gt;<span class="pl-smi">windowing_data</span>)</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1914" class="blob-num js-line-number" data-line-number="1914"></td>
        <td id="file-gdkevents-quartz-c-LC1914" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1915" class="blob-num js-line-number" data-line-number="1915"></td>
        <td id="file-gdkevents-quartz-c-LC1915" class="blob-code blob-code-inner js-file-line">      [(NSEvent *)priv-&gt;<span class="pl-smi">windowing_data</span> release];</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1916" class="blob-num js-line-number" data-line-number="1916"></td>
        <td id="file-gdkevents-quartz-c-LC1916" class="blob-code blob-code-inner js-file-line">      priv-&gt;<span class="pl-smi">windowing_data</span> = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1917" class="blob-num js-line-number" data-line-number="1917"></td>
        <td id="file-gdkevents-quartz-c-LC1917" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="file-gdkevents-quartz-c-L1918" class="blob-num js-line-number" data-line-number="1918"></td>
        <td id="file-gdkevents-quartz-c-LC1918" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
</table>


  </div>

  </div>
</div>


    <a name="comments"></a>
    <div class="discussion-timeline width-full js-quote-selection-container float-none" data-quote-markdown=".js-comment-body">
      <div class="js-discussion js-socket-channel" data-channel="marked-as-read:gist:35051006">
        

<!-- Rendered timeline since 2016-04-30 17:02:29 -->
<div id="partial-timeline-marker"
      class="js-timeline-marker js-updatable-content"
      data-url="/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21/show_partial?partial=gist%2Ftimeline_marker&amp;since=1462060949"
      data-last-modified="Sun, 01 May 2016 00:02:29 GMT"
      >
</div>


        <div class="discussion-timeline-actions">
            
<div class="flash flash-warn mt-3">
    <a rel="nofollow" class="btn btn-primary" data-hydro-click="{&quot;event_type&quot;:&quot;authentication.click&quot;,&quot;payload&quot;:{&quot;location_in_page&quot;:&quot;signed out comment&quot;,&quot;repository_id&quot;:null,&quot;auth_type&quot;:&quot;SIGN_UP&quot;,&quot;client_id&quot;:null,&quot;originating_request_id&quot;:&quot;9144:1452:21D339:3B9CED:5CD47029&quot;,&quot;originating_url&quot;:&quot;https://gist.github.com/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21&quot;,&quot;referrer&quot;:null,&quot;user_id&quot;:null}}" data-hydro-click-hmac="ed420d6c7d1aceac2203c4da3d9cbe60d8997f688e4e5038e42a9f9ff03ceaa4" href="/join?source=comment-gist">Sign up for free</a>
    <strong>to join this conversation on GitHub</strong>.
    Already have an account?
    <a rel="nofollow" data-hydro-click="{&quot;event_type&quot;:&quot;authentication.click&quot;,&quot;payload&quot;:{&quot;location_in_page&quot;:&quot;signed out comment&quot;,&quot;repository_id&quot;:null,&quot;auth_type&quot;:&quot;LOG_IN&quot;,&quot;client_id&quot;:null,&quot;originating_request_id&quot;:&quot;9144:1452:21D339:3B9CED:5CD47029&quot;,&quot;originating_url&quot;:&quot;https://gist.github.com/Algorithmus/7bfdbc6ac6ba18d254840299a218fe21&quot;,&quot;referrer&quot;:null,&quot;user_id&quot;:null}}" data-hydro-click-hmac="1c3d9ae047b09956f3620d0b1b555a111ae421dfe61af380d744e9a7ccc46486" href="/login?return_to=https%3A%2F%2Fgist.github.com%2FAlgorithmus%2F7bfdbc6ac6ba18d254840299a218fe21">Sign in to comment</a>
</div>

        </div>
      </div>
    </div>
</div>
  </div>

  <div class="modal-backdrop js-touch-events"></div>
</div><!-- /.container -->

    </main>
  </div>

  </div>

        
<div class="footer container-lg width-full px-3" role="contentinfo">
  <div class="position-relative d-flex flex-justify-between pt-6 pb-2 mt-6 f6 text-gray border-top border-gray-light ">
    <ul class="list-style-none d-flex flex-wrap ">
      <li class="mr-3">&copy; 2019 <span title="0.12670s from unicorn-65f77646d9-qh6wj">GitHub</span>, Inc.</li>
        <li class="mr-3"><a data-ga-click="Footer, go to terms, text:terms" href="https://github.com/site/terms">Terms</a></li>
        <li class="mr-3"><a data-ga-click="Footer, go to privacy, text:privacy" href="https://github.com/site/privacy">Privacy</a></li>
        <li class="mr-3"><a data-ga-click="Footer, go to security, text:security" href="https://github.com/security">Security</a></li>
        <li class="mr-3"><a href="https://githubstatus.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
        <li><a data-ga-click="Footer, go to help, text:help" href="https://help.github.com">Help</a></li>
    </ul>

    <a aria-label="Homepage" title="GitHub" class="footer-octicon d-none d-lg-block mx-lg-4" href="https://github.com">
      <svg height="24" class="octicon octicon-mark-github" viewBox="0 0 16 16" version="1.1" width="24" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"/></svg>
</a>
   <ul class="list-style-none d-flex flex-wrap ">
        <li class="mr-3"><a data-ga-click="Footer, go to contact, text:contact" href="https://github.com/contact">Contact GitHub</a></li>
        <li class="mr-3"><a href="https://github.com/pricing" data-ga-click="Footer, go to Pricing, text:Pricing">Pricing</a></li>
      <li class="mr-3"><a href="https://developer.github.com" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li class="mr-3"><a href="https://training.github.com" data-ga-click="Footer, go to training, text:training">Training</a></li>
        <li class="mr-3"><a href="https://github.blog" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a data-ga-click="Footer, go to about, text:about" href="https://github.com/about">About</a></li>

    </ul>
  </div>
  <div class="d-flex flex-justify-center pb-6">
    <span class="f6 text-gray-light"></span>
  </div>
</div>



  <div id="ajax-error-message" class="ajax-error-message flash flash-error">
    <svg class="octicon octicon-alert" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.893 1.5c-.183-.31-.52-.5-.887-.5s-.703.19-.886.5L.138 13.499a.98.98 0 0 0 0 1.001c.193.31.53.501.886.501h13.964c.367 0 .704-.19.877-.5a1.03 1.03 0 0 0 .01-1.002L8.893 1.5zm.133 11.497H6.987v-2.003h2.039v2.003zm0-3.004H6.987V5.987h2.039v4.006z"/></svg>
    <button type="button" class="flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
      <svg class="octicon octicon-x" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z"/></svg>
    </button>
    You can’t perform that action at this time.
  </div>


    <script crossorigin="anonymous" integrity="sha512-9xuqJaevbvuMSpU/XE2HkVuGB7xxrImFOZyZKanXTBY1FUqf/n/yxMDb8QcOiIBKHxzQzbgcJSnoavQAxGUP+g==" type="application/javascript" src="https://github.githubassets.com/assets/compat-bootstrap-965699fc.js"></script>
    
    
    
    
      <script crossorigin="anonymous" async="async" integrity="sha512-frN7rjVhloI/sptqz8RQnHpCa8LnG4OAiJBN7X1TXZ2gD3/hzuno8PWDRxYHkMAlPlt4DFVH6Wu3UK4l91W55g==" type="application/javascript" src="https://github.githubassets.com/assets/gist-bootstrap-55272cbc.js"></script>

    
  <div class="js-stale-session-flash stale-session-flash flash flash-warn flash-banner" hidden
    >
    <svg class="octicon octicon-alert" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.893 1.5c-.183-.31-.52-.5-.887-.5s-.703.19-.886.5L.138 13.499a.98.98 0 0 0 0 1.001c.193.31.53.501.886.501h13.964c.367 0 .704-.19.877-.5a1.03 1.03 0 0 0 .01-1.002L8.893 1.5zm.133 11.497H6.987v-2.003h2.039v2.003zm0-3.004H6.987V5.987h2.039v4.006z"/></svg>
    <span class="signed-in-tab-flash">You signed in with another tab or window. <a href="">Reload</a> to refresh your session.</span>
    <span class="signed-out-tab-flash">You signed out in another tab or window. <a href="">Reload</a> to refresh your session.</span>
  </div>
  <template id="site-details-dialog">
  <details class="details-reset details-overlay details-overlay-dark lh-default text-gray-dark" open>
    <summary aria-haspopup="dialog" aria-label="Close dialog"></summary>
    <details-dialog class="Box Box--overlay d-flex flex-column anim-fade-in fast">
      <button class="Box-btn-octicon m-0 btn-octicon position-absolute right-0 top-0" type="button" aria-label="Close dialog" data-close-dialog>
        <svg class="octicon octicon-x" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z"/></svg>
      </button>
      <div class="octocat-spinner my-6 js-details-dialog-spinner"></div>
    </details-dialog>
  </details>
</template>

  <div class="Popover js-hovercard-content position-absolute" style="display: none; outline: none;" tabindex="0">
  <div class="Popover-message Popover-message--bottom-left Popover-message--large Box box-shadow-large" style="width:360px;">
  </div>
</div>

  <div aria-live="polite" class="js-global-screen-reader-notice sr-only"></div>

  </body>
</html>
