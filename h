<!DOCTYPE html>
<html lang="zh-TW">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Forest of Creativity | 創意森林</title>
    <style>
        :root {
            --deep-brown: #5D4037;
            --light-brown: #8D6E63;
            --forest-green: #2E7D32;
            --sage-green: #81C784;
            --cream: #F5F5DC;
            --text-color: #2D1810;
            --background-color: #F8F4E3;
        }

        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }

        body {
            font-family: 'Segoe UI', -apple-system, BlinkMacSystemFont, sans-serif;
            line-height: 1.6;
            color: var(--text-color);
            background-color: var(--background-color);
            background-image: 
                linear-gradient(rgba(248, 244, 227, 0.97), rgba(248, 244, 227, 0.97)),
                url("data:image/svg+xml,%3Csvg width='60' height='60' viewBox='0 0 60 60' xmlns='http://www.w3.org/2000/svg'%3E%3Cpath d='M54 22c0-12-18-8-18 4 0 12-24 8-24-4 0-12 18-8 18 4 0 12 24 8 24-4z' fill='%2381C784' fill-opacity='0.1' fill-rule='evenodd'/%3E%3C/svg%3E");
        }

        header {
            background: linear-gradient(135deg, var(--deep-brown), var(--forest-green));
            padding: 3rem 2rem;
            color: var(--cream);
            text-align: center;
            position: relative;
            overflow: hidden;
            box-shadow: 0 4px 15px rgba(0,0,0,0.1);
        }

        header::before {
            content: '';
            position: absolute;
            top: 0;
            left: 0;
            right: 0;
            bottom: 0;
            background-image: url("data:image/svg+xml,%3Csvg width='60' height='60' viewBox='0 0 60 60' xmlns='http://www.w3.org/2000/svg'%3E%3Cpath d='M54 22c0-12-18-8-18 4 0 12-24 8-24-4 0-12 18-8 18 4 0 12 24 8 24-4z' fill='%23FFFFFF' fill-opacity='0.05' fill-rule='evenodd'/%3E%3C/svg%3E");
            opacity: 0.3;
        }

        header h1 {
            font-size: 2.5rem;
            margin-bottom: 1rem;
            text-shadow: 2px 2px 4px rgba(0,0,0,0.2);
        }

        nav {
            background: var(--cream);
            padding: 1rem;
            box-shadow: 0 2px 5px rgba(0,0,0,0.1);
            position: sticky;
            top: 0;
            z-index: 100;
        }

        nav ul {
            display: flex;
            justify-content: center;
            list-style: none;
            gap: 2rem;
        }

        nav a {
            color: var(--deep-brown);
            text-decoration: none;
            font-weight: 500;
            transition: all 0.3s;
            padding: 0.5rem 1rem;
            border-radius: 20px;
        }

        nav a:hover {
            background-color: var(--sage-green);
            color: var(--cream);
        }

        .container {
            max-width: 1200px;
            margin: 0 auto;
            padding: 2rem;
        }

        .section-title {
            font-size: 2.2rem;
            margin-bottom: 2rem;
            color: var(--deep-brown);
            text-align: center;
            position: relative;
            padding-bottom: 1rem;
        }

        .section-title::after {
            content: '';
            position: absolute;
            bottom: 0;
            left: 50%;
            transform: translateX(-50%);
            width: 60px;
            height: 3px;
            background: linear-gradient(to right, var(--deep-brown), var(--forest-green));
            border-radius: 2px;
        }

        .portfolio-grid {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(300px, 1fr));
            gap: 2rem;
            margin-bottom: 4rem;
        }

        .portfolio-item {
            background: var(--cream);
            border-radius: 15px;
            overflow: hidden;
            box-shadow: 0 5px 15px rgba(93, 64, 55, 0.1);
            transition: all 0.4s ease;
            position: relative;
        }

        .portfolio-item:hover {
            transform: translateY(-5px);
            box-shadow: 0 8px 25px rgba(93, 64, 55, 0.2);
        }

        .portfolio-item img {
            width: 100%;
            height: 220px;
            object-fit: cover;
            transition: all 0.4s ease;
        }

        .portfolio-item:hover img {
            transform: scale(1.05);
        }

        .portfolio-item-content {
            padding: 1.8rem;
        }

        .portfolio-item-content h3 {
            color: var(--deep-brown);
            margin-bottom: 0.8rem;
            font-size: 1.3rem;
        }

        .blog-posts {
            display: grid;
            gap: 2rem;
        }

        .blog-post {
            background: var(--cream);
            padding: 2rem;
            border-radius: 15px;
            box-shadow: 0 5px 15px rgba(93, 64, 55, 0.1);
            transition: all 0.3s ease;
            border-left: 5px solid var(--forest-green);
        }

        .blog-post:hover {
            transform: translateX(5px);
            box-shadow: 0 8px 25px rgba(93, 64, 55, 0.15);
        }

        .blog-post h3 {
            color: var(--deep-brown);
            margin-bottom: 1rem;
            font-size: 1.5rem;
        }

        .language-switch {
            position: absolute;
            top: 1rem;
            right: 1rem;
            z-index: 1;
        }

        .language-switch button {
            background: transparent;
            border: 2px solid var(--cream);
            color: var(--cream);
            padding: 0.5rem 1rem;
            border-radius: 20px;
            cursor: pointer;
            margin-left: 0.5rem;
            transition: all 0.3s ease;
            font-weight: 500;
        }

        .language-switch button:hover {
            background: var(--cream);
            color: var(--deep-brown);
        }

        footer {
            background: var(--deep-brown);
            color: var(--cream);
            text-align: center;
            padding: 2rem;
            margin-top: 4rem;
            position: relative;
            overflow: hidden;
        }

        footer::before {
            content: '';
            position: absolute;
            top: 0;
            left: 0;
            right: 0;
            bottom: 0;
            background-image: url("data:image/svg+xml,%3Csvg width='60' height='60' viewBox='0 0 60 60' xmlns='http://www.w3.org/2000/svg'%3E%3Cpath d='M54 22c0-12-18-8-18 4 0 12-24 8-24-4 0-12 18-8 18 4 0 12 24 8 24-4z' fill='%23FFFFFF' fill-opacity='0.03' fill-rule='evenodd'/%3E%3C/svg%3E");
        }

        @media (max-width: 768px) {
            .portfolio-grid {
                grid-template-columns: 1fr;
            }
            
            nav ul {
                flex-direction: column;
                align-items: center;
                gap: 1rem;
            }
        }
    </style>
</head>
<body>
    <header>
        <div class="language-switch">
            <button onclick="toggleLanguage('zh')">中文</button>
            <button onclick="toggleLanguage('en')">EN</button>
        </div>
        <h1>
            <span class="zh">創意森林</span>
            <span class="en" style="display: none;">Forest of Creativity</span>
        </h1>
        <p>
            <span class="zh">在這片創意森林中探索無限可能</span>
            <span class="en" style="display: none;">Explore Endless Possibilities in This Creative Forest</span>
        </p>
    </header>

    <nav>
        <ul>
            <li>
                <a href="#portfolio">
                    <span class="zh">作品集</span>
                    <span class="en" style="display: none;">Portfolio</span>
                </a>
            </li>
            <li>
                <a href="#blog">
                    <span class="zh">部落格</span>
                    <span class="en" style="display: none;">Blog</span>
                </a>
            </li>
        </ul>
    </nav>

    <main class="container">
        <section id="portfolio">
            <h2 class="section-title">
                <span class="zh">創意足跡</span>
                <span class="en" style="display: none;">Creative Footprints</span>
            </h2>
            <div class="portfolio-grid">
                <div class="portfolio-item">
                    <img src="/api/placeholder/400/320" alt="Project 1">
                    <div class="portfolio-item-content">
                        <h3>
                            <span class="zh">森林的低語</span>
                            <span class="en" style="display: none;">Whispers of the Forest</span>
                        </h3>
                        <p>
                            <span class="zh">一個充滿自然靈感的創意計畫...</span>
                            <span class="en" style="display: none;">A nature-inspired creative project...</span>
                        </p>
                    </div>
                </div>
                <div class="portfolio-item">
                    <img src="/api/placeholder/400/320" alt="Project 2">
                    <div class="portfolio-item-content">
                        <h3>
                            <span class="zh">光影之舞</span>
                            <span class="en" style="display: none;">Dance of Light and Shadow</span>
                        </h3>
                        <p>
                            <span class="zh">探索光與影的奧妙互動...</span>
                            <span class="en" style="display: none;">Exploring the magical interaction of light and shadow...</span>
                        </p>
                    </div>
                </div>
            </div>
        </section>

        <section id="blog">
            <h2 class="section-title">
                <span class="zh">思緒日誌</span>
                <span class="en" style="display: none;">Thought Journal</span>
            </h2>
            <div class="blog-posts">
                <article class="blog-post">
                    <h3>
                        <span class="zh">在創意小徑上漫步</span>
                        <span class="en" style="display: none;">Walking the Creative Path</span>
                    </h3>
                    <p>
                        <span class="zh">分享我在創作過程中的點滴靈感與深刻感悟...</span>
                        <span class="en" style="display: none;">Sharing moments of inspiration and deep insights during my creative journey...</span>
                    </p>
                </article>
                <article class="blog-post">
                    <h3>
                        <span class="zh">自然的創意靈感</span>
                        <span class="en" style="display: none;">Nature's Creative Inspiration</span>
                    </h3>
                    <p>
                        <span class="zh">從大自然汲取創作養分，讓靈感在心中生根發芽...</span>
                        <span class="en" style="display: none;">Drawing creative nourishment from nature, letting inspiration take root and grow...</span>
                    </p>
                </article>
            </div>
        </section>
    </main>

    <footer>
        <p>
            <span class="zh">© 2024 創意森林. 讓創意生生不息。</span>
            <span class="en" style="display: none;">© 2024 Forest of Creativity. Let creativity flourish endlessly.</span>
        </p>
    </footer>

    <script>
        function toggleLanguage(lang) {
            const zhElements = document.querySelectorAll('.zh');
            const enElements = document.querySelectorAll('.en');
            
            if (lang === 'zh') {
                zhElements.forEach(el => el.style.display = 'inline');
                enElements.forEach(el => el.style.display = 'none');
            } else {
                zhElements.forEach(el => el.style.display = 'none');
                enElements.forEach(el => el.style.display = 'inline');
            }
        }
    </script>
</body>
</html>
